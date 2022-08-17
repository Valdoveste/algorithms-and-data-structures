#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int findDecimalPlaces(int n);
void numberToArr(int *digits, int nb);
int arrToNumber(int *digits, int digitsSize, int dPlaces);
int *plusOne(int *digits, int digitsSize, int *returnSize);

int main()
{

    int digits[1] = {9};
    int digitsSize = 1;
    int returnSize[1];

    plusOne(digits, digitsSize, returnSize);

    int j = 0;
    while(j < digitsSize){
        printf("%d, ", digits[j]);
        j++;
    }

    return 0;
}

int *plusOne(int *digits, int digitsSize, int *returnSize)
{
    *returnSize = digitsSize;
    int dPlaces = findDecimalPlaces(digitsSize);
    int nb = arrToNumber(digits, digitsSize, dPlaces);

    numberToArr(digits, nb);

    return digits;
}

int findDecimalPlaces(int n)
{
    int i = 0;
    int dPlaces = 1;

    while ((++i) < n)
        dPlaces *= 10;

    return dPlaces;
}

int arrToNumber(int *digits, int digitsSize, int dPlaces)
{

    int i = (digitsSize - 1);
    int numArr = 0;

    while (i >= 0)
    {
        numArr += (digits[i] * dPlaces);
        dPlaces /= 10;
        i--;
    }

    return numArr;
}

void numberToArr(int *digits, int nb)
{
    int i = 0;

    while (i < nb)
    {
        digits[i] = (nb % 10);
        nb /= 10;
        i++;
    }
    digits[i] += 1;
}