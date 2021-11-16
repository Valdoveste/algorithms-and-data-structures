/*
Exercise 06
file the be submitted: ft_print_comb2.c
Allowed funcions: write

Instructions:
- You Folder must ONLY contain the demanded file to be submitted.
- You'll only submit the "main()" if its requested.
- gcc -Wall -Wextra -Werror.

- Write a function that prints, in ascending order, all different combinations of two numbers between 0 and 99.
- Example:
    $>./a.out | cat -e
    00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$>

- Must be prototyped this way:
    void ft_print_comb2(void);

    Tip: RTFM
*/

#include <stdio.h>
#include <unistd.h>

void ft_putchar(int x, int z);

void ft_print_comb2(void);

int main()
{
    ft_print_comb2();
    return 0;
}

void ft_print_comb2(void){
    char n[] = {'0', '0', '0', '0'};

    ft_putchar(x,z);

}

void ft_putchar(int x, int z){
        write(1, x, 1);
        write(1, "  ", 2);
        write(1, z, 1);
        write(1, ", ", 2);
}
