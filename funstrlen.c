#include <stdio.h>
 
int string_length(char []);
 
int main()
{
   char s[100];
   int length;
 
   printf("Input a string\n");
   gets(s);
 
   length = string_length(s);
 
   printf("Length of \"%s\" = %d\n", s, length);
 
   return 0;
}
 
int string_length(char s[]) 
{
   int c = 0;
 
   while (s[c] != '\0')
      {
      c++;
      }
   return c;
}
