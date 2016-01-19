#include <stdio.h>
#include <string.h>
void my_strrev(char [], char []);

int main()
{
   char str[20], rev[20];
   printf("Input a string\n");
   gets(str);
   my_strrev(str,rev);
   printf("reverse string: \n%s\n", rev);
   return 0;
}

void my_strrev(char str[], char rev[])
{
   int n, i, j;
   n = strlen(str);
   for (i = n - 1, j = 0; i >= 0; i--, j++)
     {
      rev[j] = str[i];
     }
   rev[j] = '\0';
}
