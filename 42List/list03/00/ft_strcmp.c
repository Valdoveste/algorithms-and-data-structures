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
    int i = 0;
    int j = 0;

    while (s1[i])
        i++;

    while (s2[j])
        j++;

    if (i == j)
        return 0;
    else if (i < j)
        return -1;
    else 
        return 1;
}
