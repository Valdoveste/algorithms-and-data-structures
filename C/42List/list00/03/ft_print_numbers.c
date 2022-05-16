/*
Exercise 03
file the be submitted: ft_print_numbers.c
Allowed funcions: write

Instructions:
- You Folder must ONLY contain the demanded file to be submitted.
- You'll only submit the "main()" if its requested.
- gcc -Wall -Wextra -Werror.

- Write a function that print all numbers in one line in ascending order.
- Must be prototyped this way:
    void ft_print_numbers(void);

    Tip: RTFM
*/

#include <stdio.h>
#include <unistd.h>

void ft_print_numbers(void);

// int main()
// {
//     ft_print_numbers();
//     return 0;
// }

void ft_print_numbers(void)
{
    char numb = '0';

    while (numb <= '9')
    {
        write(1, &numb, 1);
        numb++;
    }
}
