#include <stdio.h>
#include <unistd.h>

char *ft_strupcase(char *str);

int main()
{

	char str[] = "asdfAasdfAadf";

	ft_strupcase(str);

	printf("%s", str);
	return 0;
}

char *ft_strupcase(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] -= 32;
		}
			i++;
	}

	return str;
}
