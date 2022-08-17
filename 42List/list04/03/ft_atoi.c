#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str);
int ft_isNumeric(char *str);
int ft_findNumber(char str);

int main()
{

    char str[] = "113a";

    printf("%d", atoi(str));

    return 0;
}

int ft_atoi(char *str)
{

    int base = 1;
    int decimalPlaces = ft_isNumeric(str);

    while (decimalPlaces > 0)
    {
        base *= 10;
        decimalPlaces--;
    }

    int i = 0;
    int parsedStr = 0;

    while (str[i] != '\0')
    {
        int found = ft_findNumber(str[i]);
        parsedStr += (found * base);
        base /= 10;
        i++;
    }

    return parsedStr;
}

int ft_isNumeric(char *str)
{
    if (!(str[0] >= '0' && str[0] <= '9'))
    {
        return 0;
    }
    else
    {
        int i = 0;

        while (str[i] != '\0')
        {
            if (!(str[i] >= '0' && str[i] <= '9'))
                return (i - 1);

            i++;
        }

        return (i - 1);
    }
}

int ft_findNumber(char str)
{

    int i = 0;
    char numbers[] = "0123456789";

    while (numbers[i] != '\0')
    {
        if (str == numbers[i])
            break;

        i++;
    }

    return i;
}
