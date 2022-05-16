#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str);

// int main(){
	
// 	char *str;

// 	str = "Teste";

// 	printf("%d", ft_strlen(str));

// 	return 0;
// }

int ft_strlen(char *str){
	
	int 	strlen;

	strlen = 0;

	while(str[strlen] != '\0')
		strlen++;

	return strlen;

}
