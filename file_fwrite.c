#include<stdio.h>
#include<unistd.h>
int main()
{
FILE *fp;
fp=fopen("akhil1.bin", "wb");
char x[12]="ABCDEFGHIJ\n";
fwrite(x, sizeof(x[0]), sizeof(x), fp);
return 0;
}
