#include <stdio.h>
#include <unistd.h>

int    ft_strlen(char  *str);
char   *ft_strcpy(char *dest, char *src);

int     main(){

    char    dest[] = "123456";
    char    src[] = "abcdef";

    ft_strcpy(dest, src);

    printf("%s", dest);
    return 0;
}

char   *ft_strcpy(char *dest, char *src){
    int     i = 0;

    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return dest;
}
