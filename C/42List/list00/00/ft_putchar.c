/*
Exercise 00
file the be submitted: ft_putchar.c
Allowed funcions: write

Instructions:
- You Folder must ONLY contain the demanded file to be submitted.
- You'll only submit the "main()" if its requested.
- gcc -Wall -Wextra -Werror.

- Write a function that shows a character sent as parameters.
- Must be prototyped this way:
    void ft_putchar(char c);
- To indicate de character, you must use the "write" function this way
    write(1, &c, 1);

    Tip: RTFM
*/

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c);

// int main()
// {
//     ft_putchar('c');
//     return 0;
// }

void ft_putchar(char c)
{
    write(1, &c, 1);
}
