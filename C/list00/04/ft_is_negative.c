/*
Exercise 04
file the be submitted: ft_putchar.c
Allowed funcions: write

Instructions:
- You Folder must ONLY contain the demanded file to be submitted.
- You'll only submit the "main()" if its requested.
- gcc -Wall -Wextra -Werror.

- Write a function that shows 'N' or 'P' based on the integer passed as a parameter. If n is negative, then shows 'N'. If not shows 'P'.
- Must be prototyped this way:
    void ft_is_negative(int n);

    Tip: RTFM
*/

#include <stdio.h>
#include <unistd.h>

void ft_is_negative(int n);

// int main()
// {
//     ft_is_negative(5);
//     return 0;
// }

void ft_is_negative(int n)
{
    if (n < 0)
        write(1, "N", 1);
    else
        write(1, "P", 1);
}
