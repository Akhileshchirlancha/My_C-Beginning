#include <stdio.h>
#include <unistd.h>
int main ()
{
   FILE *fp;
   int len,ret;

   fp = fopen("filetell.txt", "w");
   ret=fp;
   printf("%d\n",ret);
#if 1
   if( fp == NULL ) 
   {
      perror ("Error opening file");
      return(-1);
   }
   fseek(fp, 5, SEEK_END);
   len = ftell(fp);
   printf("Total size of END filetell.txt = %d bytes\n", len);

      fseek(fp, 5, SEEK_CUR);
      len = ftell(fp);
      printf("Total size of CUR filetell.txt = %d bytes\n", len);

   fseek(fp, 5, SEEK_SET);
   len = ftell(fp);
   printf("Total size of SET filetell.txt = %d bytes\n", len);

   fclose(fp);

#endif  
   return(0);
}
