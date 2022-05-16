#include <stdio.h>
#include <unistd.h>

// 24.  São dados dois números inteiros positivos p e q, sendo que o número de dígitos de p é menor ou igual ao número de dígitos de q. Verificar se p é um subnúmero de q.

//     Exemplos:

//             p = 23, q = 57238, p é subnúmero de q.

//             p = 23, q = 258347, p não é subnúmero de q.

// int getDecimalPlaces(int n);
// int generateBase(int n);
void isSubNumber(int p, int q);

// 2147483647 -2147483648

int main(){

    isSubNumber(23, 57238);

    return 0;
}

void isSubNumber(int p, int q){
    int x[9];
    int n[9];

    printf("%d%d", p, q);
    // printf("%d  -   %d", p+2, q%10);

    // printf("%d", getDecimalPlaces(57238));
}

void push(){
    
}

// void iseven(){

// }

// int getDecimalPlaces(int n){
//     int cont;

//     cont = 1;

//     while((n /= 10) > 0){
//         cont++;
//     }

//     return cont;
// }

int generateBase(int n){
    int cont;

    int base;

    cont = 1;
    base = 1;   

    while(n >= cont){
        base *= 10;
    }

    return base;
}
