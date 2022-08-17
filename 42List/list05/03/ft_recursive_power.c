#include <stdio.h>
#include <unistd.h>

int ft_recursive_power(int nb, int power);

int main()
{

    printf("%d", ft_recursive_power(5, 4));

    return 0;
}

int ft_recursive_power(int nb, int power)
{
    // int res = 1;

    if (nb == 0 && power == 0)
        return 1;

    if (power > 1)
    {
        nb = (ft_recursive_power(nb, (power - 1)) * nb) ;
    }

    return nb;
}
