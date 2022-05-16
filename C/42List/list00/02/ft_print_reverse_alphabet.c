/*
Exercise 02
file the be submitted: ft_print_reverse_alphabet.c
Allowed funcions: write

Instructions:
- You Folder must ONLY contain the demanded file to be submitted.
- You'll only submit the "main()" if its requested.
- gcc -Wall -Wextra -Werror.

- Write a function that prints the alphabet in lowercase in one line, descending order, and starting with the letter 'z'.
- Must be prototyped this way:
    void ft_print_reverse_alphabet(void);

    Tip: RTFM
*/

#include <stdio.h>
#include <unistd.h>

void ft_print_reverse_alphabet(void);

// int main()
// {
//     ft_print_reverse_alphabet();
//     return 0;
// }

void ft_print_reverse_alphabet(void)
{
    char alpha = 'z';

    while (alpha >= 'a')
    {
        write(1, &alpha, 1);
        alpha--;
    }
}
