#include <stdio.h>
#include <unistd.h>

int *sort(int n);
int *seila(int arr[]);

int main(){

    // sort(789321456);??
    // printf("Hello");

    // printf("%d", sort(789321456)[0]);

    // int i;

    // i = 0;

    // while(i < 9){
    //     printf("%d", seila(sort(789321456))[i]);
    //     i++;
    // }
        seila(sort(789321456));

    return 0;
}

int *seila(int arr[]){
    int     i;
    int     j;
    int     aux;

    i = 0;
    j = 1;
    aux = 0;

    while (arr[i] != '\0')
    {
        while(arr[j] != '\0')
        {
            if(arr[i] > arr[j]){
                
            }   

            j++;
        }
        i++;
        printf("%d", arr[i]);
    }

    return arr;
}

int *sort(int n){
    int i;
    static int arrUnsorted[9];

    i = 0;

    while(n > 0){
        arrUnsorted[i] = (n % 10);
        n /= 10;
        i++;
    }
    return arrUnsorted;
}
