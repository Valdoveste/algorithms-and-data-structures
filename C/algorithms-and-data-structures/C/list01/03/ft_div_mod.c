#include <stdio.h>
#include <unistd.h>
void ft_swap(int *a, int *b, int *div, int *mod);

void ft_swap(int *a, int *b, int *div, int *mod){
    *div = (*a % *b); 
    *mod = (*a / *b);
}
