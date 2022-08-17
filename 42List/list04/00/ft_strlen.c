#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str);

int main(){

    char str[] = "abcdefghij";

    printf("%d", ft_strlen(str));

    return 0;
}

int ft_strlen(char *str)
{
    int len = 0;

    while (str[len])
        len++;

    return len;
}
