#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(){

	int tab[] = {3, 6, 1, 2, 5, 8, 7, 0, 9, 4};
	int size = 10;

	ft_sort_int_tab(tab, size);

	return 0;
}

void	ft_sort_int_tab(int *tab, int size){
	int		i;
	int 	j;
	int		aux;

	i = 0;
	j = 1;
	aux = 0;

	while(size > i){
		while(size  > j){
			if(tab[i] < tab[j]){
				aux = tab[i];
				tab[i] = tab[j];
				tab[j] = aux;
			}
			j++;
		}
		i++;
		j = 0;
	}
}
