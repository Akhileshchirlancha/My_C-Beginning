#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
int i,fss;
char ch;
FILE *fs,*fp;
fs=fopen("source.txt","r");
fp=fopen("target.txt","w");
#if 1
 while(1)
 {
  ch=getc(fs);
  if(ch==EOF)
   {
  break;
   }
  else 
   {
   fseek(fs,-1,SEEK_CUR);
   fputc(ch,fp);
   }
 }
#endif
return 0;
}
