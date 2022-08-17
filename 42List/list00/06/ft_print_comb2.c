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

void ft_calc_comb2(char comb[], int indexI, int indexII, int indexIII);

void ft_putchar(char a, char b, char c, char d);

void ft_print_comb2(void);

int main()
{
    ft_print_comb2();
    return 0;
}

void ft_print_comb2(void)
{
    char comb[] = {'0', '0', '0', '1', '\0'};

    while (comb[1] != '9' || comb[2] != '9' || comb[3] != '9')
    {
        if (!(comb[1] == '9' && comb[2] == '0' && comb[3] == ':'))
        {
            ft_putchar(comb[0], comb[1], comb[2], comb[3]);
        }
        ft_calc_comb2(comb, 3, 2, 1);
    }

    while (comb[0] != '9' || comb[1] != '9')
    {
        ft_putchar(comb[0], comb[1], comb[2], comb[3]);
        ft_calc_comb2(comb, 1, 0, 0);
    }
}

void ft_calc_comb2(char comb[], int indexI, int indexII, int indexIII)
{

    comb[indexI]++;
    if (comb[indexI] > '9')
    {
        comb[indexII]++;
        comb[indexI] = '0';
        if (comb[indexII] > '9')
        {
            if (indexI == 3)
            {
                comb[indexIII]++;
            }
            comb[indexI] = comb[indexIII] + 1;
            comb[indexII] = '0';
        }
    }
}

void ft_putchar(char a, char b, char c, char d)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, " ", 1);
    write(1, &c, 1);
    write(1, &d, 1);
    if (!(a == '9' && b == '8' && c == '9' && d == '9'))
    {
        write(1, ",  ", 2);
    }
}

// Initial code

// while (comb[1] != '9' || comb[2] != '9' || comb[3] != '9')
// {
//     if (!(comb[1] == '9' && comb[2] == '0' && comb[3] == ':'))
//     {
//         ft_putchar(comb[0], comb[1], comb[2], comb[3]);
//     }

//     comb[3]++;
//     if (comb[3] > '9')
//     {
//         comb[2]++;
//         comb[3] = '0';
//         if (comb[2] > '9')
//         {
//             comb[1]++;
//             comb[3] = comb[1] + 1;
//             comb[2] = '0';
//         }
//     }
// }

// while (comb[0] != '9' || comb[1] != '9')
// {
//     ft_putchar(comb[0], comb[1], comb[2], comb[3]);
//     comb[1]++;
//     if (comb[1] > '9')
//     {
//         comb[0]++;
//         comb[1] = '0';
//         if (comb[0] > '9')
//         {
//             comb[1] = comb[0] + 1;
//             comb[0] = '0';
//         }
//     }
// }