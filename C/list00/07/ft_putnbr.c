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

void ft_putchar(char nb);

void ft_putnbr(int nb);

// Value of INT_MAX is +2147483647.
// Value of INT_MIN is -2147483648.

int main(){
    ft_putnbr(42);
    return 0;
}

void ft_putnbr(int nb){
    
}

void ft_putchar(char nb)
{
    write(1, &nb, 1);
}
