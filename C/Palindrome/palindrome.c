#include <stdio.h>
#include <unistd.h>

int isPalindrome(int n);
int getDecimalPlaces(int n);
int nInverted(int n);

int main()
{
    int n;
    n = 1;

    printf("%d", isPalindrome(n));
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

    while (decimalPlaces > 0)
    {
        base *= 10;
        decimalPlaces--;
    }

    while (n > 0)
    {
        nInverted += (p * (n % 10));
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
