#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str);
char *ft_strstr(char *str, char *to_find);

int main()
{

    char str[] = "nickyPandaonicky";
    char to_find[] = "to";

    printf("%s", ft_strstr(str, to_find));

    return 0;
}

char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j = 0;
    int to_find_len = ft_strlen(to_find);

    if (to_find_len == 0)
        return str;

    while (str[i] != '\0')
    {
        if (to_find[j] == str[i])
        {
            j++;
            if (j == to_find_len)
            {
                return ((str + i) - 1);
            }
        }
        else
        {
            j = 0;
        }
        i++;
    }

    return '\0';
}

int ft_strlen(char *str)
{
    int len = 0;

    while (str[len])
        len++;

    return len;
}
