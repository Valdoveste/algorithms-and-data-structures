#include <stdio.h>
#include <unistd.h>

int ft_is_prime(int nb);

int main()
{
    int nb = 11;

    printf("%d", ft_is_prime(nb));

    return 0;
}

int ft_is_prime(int nb)
{
    if (nb <= 1)
        return 0;

    int i = 0;
    int isPrime = 0;

    while (i++ <= nb)
        if (nb % i == 0)
            isPrime++;

    if (isPrime == 2)
        return 1;

    return isPrime;
}
