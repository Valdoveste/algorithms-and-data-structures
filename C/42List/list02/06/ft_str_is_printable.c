#include <stdio.h>
#include <unistd.h>

int     ft_strlen(char *str);
int     ft_str_is_printable(char *str);

int     main(){

    char str[] = "";

    ft_str_is_printable(str);
    return 0;
}

int     ft_str_is_printable(char *str){

   if (ft_strlen(str) == 0)
      return 1;

   int i = 0;

   while (str[i] != '\0')
   {
      if (!((str[i] >= 0 && str[i] <= 31) || str[i] == 127))
         return 0;

      i++;
   }

   return 1;
}

int     ft_strlen(char *str)
{

   int strlen;

   strlen = 0;

   while (str[strlen] != '\0')
      strlen++;

   return strlen;
}
