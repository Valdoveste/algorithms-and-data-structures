#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str);
char *ft_strcat(char *dest, char *src);

int main()
{
    char dest[5];
    dest[0] = 'a';
    char src[] = "abc";

    ft_strcat(dest, src);

    printf("%s", dest);
    return 0;
}

char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int dest_len = ft_strlen(dest);

    while (src[i])
    {
        dest[dest_len + i] = src[i];
        i++;
    }

    dest[dest_len + i] = '\0';

    return dest;
}

int ft_strlen(char *str)
{
    int len = 0;

    while (str[len])
        len++;

    return len;
}