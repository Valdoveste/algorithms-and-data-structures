#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str);

// int main(){

//     char *str;

//     str = "Teste";

//     ft_putstr(&str[0]);

//     return 0;
// }

void ft_putstr(char *str){
    write(1, str, 1);
}