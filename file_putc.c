#include <stdio.h>
int main ()
{
   FILE *fp;
   int ch;
   fp = fopen("akhil5.txt", "w");
   for( ch = 65 ; ch <= 90; ch++ ) 
   {
      putc(ch, fp);
   }
   fclose(fp);
   return(0);
}
