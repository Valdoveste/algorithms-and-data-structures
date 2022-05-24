#include <stdio.h>
#include <unistd.h>

int ft_fibonacci(int index);

int main()
{

	int index = 5;

	printf("%d", ft_fibonacci(index));

	return 0;
}

int ft_fibonacci(int index)
{
	int i = 0;
	int fn1 = 0;
	int fn2 = 1;
	int fn = 0;

	while (i < index)
	{

		fn = (fn1 + fn2);
		// printf("%d, ", fn);
		i++;
		fn1 = i;
		fn2 = (i - fn1);
	}

	return i;
}
