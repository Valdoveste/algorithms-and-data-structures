#include <stdio.h>
#include <unistd.h>

int ft_iterative_factioral(int nb);

int main()
{
	int nb = 5;

	printf("final: %d", ft_iterative_factioral(nb));

	return 0;
}

int ft_iterative_factioral(int nb)
{
	int fac = nb;

	while((fac--) > 1)
		nb *= fac;

	return nb;
}