#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fs,*fp;
	long len;
        char ch[10];
	fs=fopen("source.txt","w+r");
	len = ftell(fs);
        fprintf(fs,"%s","Be my friend");
//	fseek(fs,0,SEEK_SET);
	len = ftell(fs);
	fclose(fs);
	fs=fopen("source.txt","r+");
	fgets(ch,5,fs);
	puts(ch);
#if 0
	fseek(fs,0,SEEK_END);
	fseek(fs,-3L,SEEK_CUR);
	fgets(ch,5,fs);
	puts(ch);
#endif
return 0;
}
