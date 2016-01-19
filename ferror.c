#include <stdio.h>
int main()
{
   FILE *fp;
   char c;

   fp = fopen("fileferror.txt", "w");

   c = fgetc(fp);
   if( ferror(fp) )
   {
      printf("Error in reading from file : fileferror.txt\n");
   }
   clearerr(fp);
   
   if( ferror(fp) )
   {
      printf("Error in reading from file : fileferror.txt\n");
   }
   fclose(fp);

   return(0);
}
