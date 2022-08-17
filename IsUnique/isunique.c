/*
Is Unique
Instructions

Create a function that determines whether all characters in a string are unique or not. Make it case-sensitive, meaning a string with both 'a' and 'A' could pass the test.

Input: String

Output: Boolean
Examples

isUnique('abcdef'); // -> true
isUnique('89%df#$^a&x'); // -> true
isUnique('abcAdef'); // -> true
isUnique('abcaef'); // -> false
*/
#include <stdio.h>
#include <unistd.h>

int isUnique(char *p);

int main(){
    char* paragraph;

    paragraph = "abcdaefga";

    int result = isUnique(paragraph);

    return 0;
}

int isUnique(char *p){
    int     i;
    int     j;

    i = 0;
    j = 1;

    while (p[i] != '\0')
    {
        while(p[j] != '\0')
        {
            if(p[i] == p[j])
                return 0;
            j++;
        }
        i++;
    }
    return 1;
}

