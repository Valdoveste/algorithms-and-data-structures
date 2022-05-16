#include <stdio.h>
#include <unistd.h>

void 	ft_print_tab(int *tab, int size);
void	ft_rev_int_tab(int *tab, int size);

int	main(){
	
	int tab[] = {3, 6, 7, 1, 5, 2, 8, 0, 9};

	int size = 8;

	ft_rev_int_tab(tab, size);

	return 0;
}

void 	ft_rev_int_tab(int *tab, int size){
	int 	aux;
	int 	i;

	aux = 0;
	i = 0;

	while((size / 2) >= i){
		aux = tab[i];
		tab[i] = tab[(size - i)];
		tab[(size - i)] = aux;
		i++;
	}

	ft_print_tab(tab, size);
}

void ft_print_tab(int *tab, int size){
	
	int		i;
	
	i = 0;

	while(size >= i){
		printf("%d\n", tab[i]);
		i++;
	}
}
