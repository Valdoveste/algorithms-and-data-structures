#include <stdio.h>
#include <unistd.h>

void ft_putstr_non_printable(char *str);
void ft_putstr_hex(int charDec);

int main()
{

	char str[] = "Oi\a \nVoce\b \testa\f \rbem?";

	ft_putstr_non_printable(str);

	return 0;
}

void ft_putstr_non_printable(char *str)
{
	int i = 0;
b
	while (str[i])
	{
		if (!((str[i] >= 0 && str[i] <= 31) || str[i] == 127))
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);

			if ((unsigned)str[i] < 16)
				write(1, "0", 1);

			ft_putstr_hex((unsigned)str[i]);
		}

		i++;
	}
}

void ft_putstr_hex(int charDec)
{
	char hex[] = "0123456789abcdef";

	while (charDec > 16)
	{
		charDec /= 16;
		charDec %= 16;
	}

	write(1, &hex[charDec], 1);
}