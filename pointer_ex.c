#include<stdio.h>
#include<unistd.h>
int main()
{
//int c =100, d=200;
int *a;
int *b;
//a=&c;
//b=&d;
//printf(“%d”, *a);
//printf(“%d”, *b);
printf("%d %u", a, a);
printf("%d %u", b, b);
return 0;
}

