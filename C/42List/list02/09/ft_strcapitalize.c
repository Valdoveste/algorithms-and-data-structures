#include <stdio.h>
#include <unistd.h>

char *ft_strlowcase(char *str);
char *ft_strcapitalize(char *str);

int main()
{

	char str[] = "oi, tudo bem? 42palavras quarenta/e/duas; cinquenta+e+um";

	ft_strlowcase(str);
	ft_strcapitalize(str);

	printf("%s", str);

	return 0;
}

char *ft_strcapitalize(char *str)
{
	int i = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] -= 32;
		}

	while (str[i] != '\0')
	{
		if (((str[i] >= 0 && str[i] <= 64) ||
			 (str[i] >= 91 && str[i] <= 96) ||
			 (str[i] >= 123 && str[i] <= 126)) &&
			(str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
			str[i + 1] -= 32;
		}
		i++;
	}

	return str;
}

char *ft_strlowcase(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}

	return str;
}