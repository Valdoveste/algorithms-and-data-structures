/*
Exercise 05
file the be submitted: ft_print_comb.c
Allowed funcions: write

Instructions:
- You Folder must ONLY contain the demanded file to be submitted.
- You'll only submit the "main()" if its requested.
- gcc -Wall -Wextra -Werror.

- Write a function that prints, in ascending order, all different combinations of three different numbers.
- Example:
    $>./a.out | cat -e
    012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
- 987 is out because 789 is already been printed in the combination.
- Also 999 is out too because all numbers are equal.
- Must be prototyped this way:
    void ft_print_comb(void);

    Tip: RTFM
*/

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char a, char b, char c);

void ft_print_comb(void);

// int main()
// {
//     ft_print_comb();
//     return 0;
// }

void ft_print_comb(void)
{
    char a;
    char b;
    char c;

    a = '0';
    b = '1';
    c = '2';
    while (a < '8')
    {
        ft_putchar(a, b, c);
        c++;
        if (c > '9')
        {
            b++;
            c = b + 1;
            if (b > '8')
            {
                b = a + 2;
                a++;
                c--;
            }
        }
    }
}

void ft_putchar(char a, char b, char c)
{
    if (a == '7' && b == '8' && c == '9')
    {
        write(1, &a, 1);
        write(1, &b, 1);
        write(1, &c, 1);
    }
    else
    {
        write(1, &a, 1);
        write(1, &b, 1);
        write(1, &c, 1);
        write(1, ", ", 2);
    }
}
