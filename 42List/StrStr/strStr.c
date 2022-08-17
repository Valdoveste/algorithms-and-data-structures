#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str);
int strStr(char *haystack, char *needle);

int main()
{
    char haystack[] = "hello";
    char needle[] = "llo";

    printf("%d", strStr(haystack, needle));
    return 0;
}

int strStr(char *haystack, char *needle)
{
    if (needle[0] == '\0' || ft_strlen(haystack) == ft_strlen(needle))
        return 0;

    int i = 0;
    int j = 0;
    int needle_len = ft_strlen(needle);

    while (haystack[i] != '\0')
    {
        if (haystack[i] == needle[j])
        {
            j++;
            if (j == needle_len)
                return ((i - j) + 1);
        }
        else
        {
            j = 0;
        }
        i++;
    }

    return -1;
}

int ft_strlen(char *str)
{
    int len = 0;

    while (str[len])
        len++;

    return len;
}