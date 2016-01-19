#include<stdio.h>
#include<stdlib.h>
int main()
{
 FILE *fp;
 char c;
 int nol=0,not=0,nos=0,noc=0;

     fp=fopen("charcount.txt","r+"); 

     while(1)
   {
     c=getc(fp);
     if(c==EOF)
      break;
     noc++;
     if(c==' ')
       nos++;
    if(c=='\n')
       nol++;
    if(c=='\t')
       not++;
   }
 fclose(fp);
 printf("Number of characters = %d\n",noc);
 printf("Number of spaces = %d\n",nos);
 printf("Number of tabs = %d\n",not);
 printf("Number of lines = %d\n",nol);
return 0;
}

