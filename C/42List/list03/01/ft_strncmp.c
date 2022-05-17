#include <stdio.h>
#include <unistd.h>

int ft_strcmp(char *s1, char *s2, unsigned int n);

int main()
{
    char s1[] = "ABCDEFG";
    char s2[] = "ABCDEFG";
    int n = 2;

    int result = ft_strcmp(s1, s2, n);

    printf("%d", result);

    return 0;
}

int ft_strcmp(char *s1, char *s2, unsigned int n)
{
   unsigned int i = 0;
   unsigned int j = 0;

    while (s1[i] && (i < n))
        i++;

    while (s2[j] && (j < n))
        j++;

    if (i == j)
        return 0;
    else if (i < j)
        return -1;
    else 
        return 1;
}
