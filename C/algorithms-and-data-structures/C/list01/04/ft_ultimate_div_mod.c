#include <stdio.h>
#include <unistd.h>

void ft_utltimate_div_mod(int *a, int *b);

// int main(){

//     int     a = 10;
//     int     b = 2;

//     ft_utltimate_div_mod(&a, &b);

//     return 0;   
// }

void ft_utltimate_div_mod(int *a, int *b){
    int aux;

    aux = (*a / *b);
    *b = (*a % *b);
    *a = aux;

    // printf("div: %d   mod: %d", *a, *b);
}       