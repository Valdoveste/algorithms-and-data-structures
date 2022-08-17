#include <stdio.h>
#include <unistd.h>

int ft_iterative_power(int nb, int power);

int main()
{

    printf("%d", ft_iterative_power(5, 4));

    return 0;
}

int ft_iterative_power(int nb, int power)
{

    if (nb == 0 && power == 0)
        return 1;

    int res = 1;

    while (power >= 1)
    {
        res *= nb;
        power--;
    }

    return res;
}