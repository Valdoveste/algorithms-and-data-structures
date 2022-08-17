#include <stdio.h>
#include <unistd.h>

int ft_iterative_factioral(int nb);

int main()
{
	int nb = 5;

	printf("%d", ft_iterative_factioral(nb));

	return 0;
}

int ft_iterative_factioral(int nb)
{
	if (nb == 1)
	{
		return 1;
	}
	else
	{
		nb = (ft_iterative_factioral((nb - 1)) * nb);
	}

	return nb;
}