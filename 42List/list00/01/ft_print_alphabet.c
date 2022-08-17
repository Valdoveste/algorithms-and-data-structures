/*
Exercise 01
file the be submitted: ft_print_alphabet.c
Allowed funcions: write

Instructions:
- You Folder must ONLY contain the demanded file to be submitted.
- You'll only submit the "main()" if its requested.
- gcc -Wall -Wextra -Werror.

- Write a function that prints the alphabet in lowercase in one line, ascending order, and starting with the letter 'a'.
- Must be prototyped this way:
    void ft_print_alphabet(void);

    Tip: RTFM
*/

#include <stdio.h>
#include <unistd.h>

void ft_print_alphabet(void);

// int main()
// {
//     ft_print_alphabet();
//     return 0;
// }

void ft_print_alphabet(void)
{
    char alpha = 'a';

    while (alpha <= 'z')
    {
        write(1, &alpha, 1);
        alpha++;
    }
}
