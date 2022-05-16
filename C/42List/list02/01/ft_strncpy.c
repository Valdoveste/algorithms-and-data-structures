#include <stdio.h>
#include <unistd.h>
#include <string.h>



char 	*ft_strncpy(char *dest, char *src, unsigned int n);

int 	main(){
	
    char    dest[] = "123456";
    char    src[] = "abcdef";
    int     n = 3;

    // strncpy(dest, src, n);

    ft_strncpy(dest, src, n);

    printf("%s", dest);
	return 0;
}

char 	*ft_strncpy(char *dest, char *src, unsigned int n){

    unsigned int     i = 0;

    while(i != n){
        dest[i] = src[i];
        i++;
    }

	return dest;
}
