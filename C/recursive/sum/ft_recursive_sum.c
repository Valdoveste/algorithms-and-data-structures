#include <stdio.h>
#include <unistd.h>

int	sum(int n);

int	main(){
	
	printf("%d", sum(5));

	return 0;
}

int 	sum(int n){

	if(n <= 0)
		return 0;

	return n + sum(n - 1);
}
