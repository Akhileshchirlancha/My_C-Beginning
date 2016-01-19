#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fs,*fp;
	long len;
        char ch[10];
	fs=fopen("source.txt","w+r");
	len = ftell(fs);
	printf("after open %ld\n", len);
	fprintf(fs,"%s","0123456789");
	len = ftell(fs);
	printf("after fprintf %ld\n", len);
	fseek(fs,0,SEEK_END);
	len = ftell(fs);
	printf("after fseek  SEEK_END  0  %ld\n", len);
	fseek(fs,-8L,SEEK_CUR);
	len = ftell(fs);
	printf("after fseek  SEEK_CUR  -8L  %ld\n", len);
	fgets(ch,5,fs);
	len = ftell(fs);
	printf("after fgets  %ld\n", len);
	puts(ch);
return 0;
}
