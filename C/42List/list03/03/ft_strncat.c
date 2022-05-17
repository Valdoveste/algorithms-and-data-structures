#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str);
char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
    char dest[6];
    dest[0] = 'a';
    char src[] = "abc";
    unsigned int nb = 1;

    ft_strncat(dest, src, nb);

    printf("%s", dest);
    return 0;
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i = 0;
    int dest_len = ft_strlen(dest);

    while (src[i] && i < nb)
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