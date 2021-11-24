/*
Exercise 07
file the be submitted: ft_putnbr.c
Allowed funcions: write

Instructions:
- You Folder must ONLY contain the demanded file to be submitted.
- You'll only submit the "main()" if its requested.
- gcc -Wall -Wextra -Werror.

- Write a function that prints, a number sent as a parameter. This function must be capable of representing the totality of an int variable.
- Example:
    ft_putnbr(42) return "42".

- Must be prototyped this way:
    void ft_putnbr(int nb);

    Tip: RTFM
*/

#include <stdio.h>
#include <unistd.h>

void ft_nbRepresenting(int nb);

void ft_putnbr(int nb);

int ft_pow(int n);

void ft_putchar(char c);

int main()
{
    ft_putnbr(42);
    return 0;
}

void ft_putnbr(int nb)
{
    if (nb == 2147483647)
    {
        write(1, "2147483647", 10);
    }
    else if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
    }

    if (nb < 0)
    {
        write(1, "-", 1);
        ft_nbRepresenting((nb *= -1));
    }
    else
    {
        ft_nbRepresenting(nb);
    }
}

void ft_nbRepresenting(int nb)
{
    int decimalPlacesPow;
    int decimalPlaces;
    int auxNb;
    int nbInvertd;

    nbInvertd = 0;
    decimalPlaces = 0;
    auxNb = nb;

    while (nb > 0)
    {
        nb /= 10;
        decimalPlaces++;
    }
    nb = auxNb;

    decimalPlacesPow = ft_pow((decimalPlaces - 1));

    while (nb > 0)
    {
        nbInvertd += (decimalPlacesPow * (nb % 10));
        decimalPlacesPow /= 10;
        nb /= 10;
    }

    while (nbInvertd > 0)
    {
        ft_putchar(((nbInvertd % 10) + '0'));
        nbInvertd /= 10;
    }
}

int ft_pow(int n)
{
    int result;
    int nTimes;

    nTimes = 0;
    result = 1;

    while (n > nTimes)
    {
        result *= 10;
        nTimes++;
    }

    return result;
}

void ft_putchar(char c)
{
    write(1, &nb, 1);
}
