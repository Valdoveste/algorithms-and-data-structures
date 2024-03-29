#include <stdio.h>
#include <unistd.h>

int isPalindrome(int n);
int getDecimalPlaces(int n);
int nInverted(int n);

int main()
{
    int n;
    n = 1234567899;

    printf("\n%d", isPalindrome(n));
    return 0;
}

int isPalindrome(int n)
{
    if (n == nInverted(n))
        return 1;

    return 0;
}

int nInverted(int n)
{
    int base;
    base = 1;

    int nInverted;
    nInverted = 0;

    int decimalPlaces;
    decimalPlaces = getDecimalPlaces(n);

    printf("%d", decimalPlaces); 

    while (decimalPlaces > 0)
    {
        base *= 10;
        decimalPlaces--;
    }

    // printf("%d", decimalPlaces); 
    // --1000000000

    while (n > 0)
    {
        nInverted += (base * (n % 10));
        base /= 10;
        n /= 10;
    }

    return nInverted;
}

int getDecimalPlaces(int n)
{
    int count;
    count = 0;

    while ((n /= 10) > 0)
        count++;

    return count;
}
