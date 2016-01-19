#include<stdio.h>
#include<unistd.h>
int main ()
{
   FILE *fp;
   int c;
   fp = fopen("akhil6.txt","w");
   while(1)
   {
      c = fgetc(fp);
      if( feof(fp) )
      {
         break ;
      }
      printf("%c", c);
   }
   fclose(fp);
   return 0;
}
