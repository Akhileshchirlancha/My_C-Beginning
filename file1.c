#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp;
int i=0;
fp=fopen("myfile.txt","w");
while(i<100)
 {
   fprintf(fp,"%d\n",i*10);
   i++;
 } 
fclose(fp);
return 0;
}
