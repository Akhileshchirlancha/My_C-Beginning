#include <stdio.h>
int main()
{
   FILE *fp;
   fp = fopen("myfile4.txt", "w");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);
 return 0;
}

