#include<stdio.h>
#include<unistd.h>
int main()
{
 FILE *fp;
 char ch;
 fp = fopen("akhil2.txt", "w");
 printf("Enter data: ");
 while( (ch = getchar()) != EOF) 
 {
    putc(ch,fp);
 }
 fclose(fp);
#if 1
 fp = fopen("akhil2.txt", "r");
 while( (ch = getc()) != EOF)
    {
    printf("%c",ch);
    }
 fclose(fp);
#endif
return 0;
}
