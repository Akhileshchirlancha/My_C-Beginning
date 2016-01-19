#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{

   FILE *fp;
   char buff[255];

   fp = fopen("akhil.txt", "r+");
#if 1
   fscanf(fp, "%s", buff);
   printf("1 : %s\n", buff );
#endif
#if 1
   fgets(buff, 255, (FILE*)fp);
   printf("2: %s\n", buff );
#endif
    fgets(buff, 255, (FILE*)fp);
   printf("3: %s\n", buff );

   fclose(fp);
 return 0;
}
