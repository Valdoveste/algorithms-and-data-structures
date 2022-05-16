#include <stdio.h>
#include <unistd.h>

char *ft_strlowcase(char *str);

int main()
{

	char str[] = "asdfAasdfAadf";

	ft_strlowcase(str);

	printf("%s", str);
	return 0;
}

char *ft_strlowcase(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] += 32;
		}
			i++;
	}

	return str;
}
