#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
char b[100];
int c;
printf("enter a\n");
//printf("enter the size of string\n");
//scanf("%d",&n);
//scanf("%s",&a);
gets(a);
#if 0
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
#endif
printf("enter b\n");
//gets(b);
scanf("%s",&b);
c=strcmp(a,b);
if(c==0)
printf("strings are same\n");
else
printf("strings are not same\n");
return 0;
}
