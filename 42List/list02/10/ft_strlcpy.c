#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{

    char dest[19];
    char src[] = "Hello there, Venus";

    printf("%d - %d", sizeof(src), sizeof(dest));

    ft_strlcpy(dest, src, sizeof(dest));

    return 0;
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{

    unsigned int i = 0;

    while ((src[i] != '\0') && (i <= size))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return size;
}