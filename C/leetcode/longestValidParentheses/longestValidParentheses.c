#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *s);
int longestValidParentheses(char *s);

int main()
{

    // char s[] = "";
    // char s1[] = "(()";
    // char s2[] = "(())";
    char s3[] = "()(()";
    // char s4[] = ")()())";
    // char s5[] = "(((())())()";

    // longestValidParentheses(s);
    // printf(" result: %d\n", longestValidParentheses(s));
    // printf(" result: %d\n", longestValidParentheses(s1));
    // printf(" result: %d\n", longestValidParentheses(s2));
    printf(" result: %d\n", longestValidParentheses(s3));
    // printf(" result: %d\n", longestValidParentheses(s4));
    // printf(" result: %d\n", longestValidParentheses(s5));

    return 0;
}

int ft_strlen(char *s);

int longestValidParentheses(char *s)
{
    int i = 0;
    int j = 0;
    int slen = ft_strlen(s);
    int k = (slen);
    int validParentheses = 0;
    int backParentheses = 0;
    int fowardParentheses = 0;

    while (s[i] != '\0')
    {
        if (s[i] == '(' && s[i + 1] == ')')
            validParentheses += 2;

        i++;
    }

    while (j < k)
    {
        if (s[j] == '(' && s[j + 1] == '(')
            fowardParentheses += 2;

        if (s[k] == ')' && s[k - 1] == ')')
            backParentheses += 2;

        j++;
        k--;
    }

    if (fowardParentheses > backParentheses){
        fowardParentheses -= (fowardParentheses - backParentheses);
    }
    else{
        backParentheses -= (backParentheses - fowardParentheses);
    }

        printf("fw: %d, bp: %d, vp: %d", fowardParentheses, backParentheses, validParentheses);

    validParentheses += ((fowardParentheses + backParentheses) / 2);

    return validParentheses;
}

int ft_strlen(char *s)
{
    int len = 0;

    while (s[len] != '\0')
        len++;

    return len;
}