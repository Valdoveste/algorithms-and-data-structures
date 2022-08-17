#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
    char dest[] = "abc";
    char src[] = "DFG";
    unsigned int size = 6;

    printf("%d", ft_strlcat(dest, src, size)); 

    printf("%s", dest);
    return 0;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    int dest_len = ft_strlen(dest);

    while (src[i] && i < size)
    {
        dest[dest_len + i] = src[i];
        i++;
    }

    dest[dest_len + i] = '\0';

    return ft_strlen(dest);
}

int ft_strlen(char *str)
{
    int len = 0;

    while (str[len])
        len++;

    return len;
}
