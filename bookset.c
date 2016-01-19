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
   ch=getc(fs);
   fputc(ch,fp);
   
   fseek(fs,4,SEEK_SET);
   ch=getc(fs);
   fputc(ch,fp);
   
   fseek(fs,3,SEEK_SET);
   ch=getc(fs);
   fputc(ch,fp);
   
   fseek(fs,4,SEEK_CUR);
   ch=getc(fs);
   fputc(ch,fp);
   
   fseek(fs,-1,SEEK_SET);
   ch=getc(fs);
   fputc(ch,fp);
   
   ch=getc(fs);
   fputc(ch,fp);
fclose(fs);
fclose(fp);
return 0;
}
