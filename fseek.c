#include <stdio.h>
int main ()
{
   FILE *fp;

   fp = fopen("akhil7.txt","w+");
   fputs("fseek function\n", fp);
  
   fseek( fp, 5, SEEK_SET );
   fputs(" C Programming Language", fp);
   fclose(fp);
   
   return 0;
}
