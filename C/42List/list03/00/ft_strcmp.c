#include <stdio.h>
#include <unistd.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
    char s1[] = "ABCDEFG";
    char s2[] = "ABCDEGSS";

    int result = ft_strcmp(s1, s2);

    printf("%d", result);

    return 0;
}

int ft_strcmp(char *s1, char *s2)
{
    int s1Lenght = 0;
    int s2Lenght = 0;

    while (s1[s1Lenght])
        s1Lenght++;

    while (s2[s2Lenght])
        s2Lenght++;

    if (s1Lenght == s2Lenght)
        return 0;
    else if (s1Lenght < s2Lenght)
        return -1;
    else 
        return 1;
}
