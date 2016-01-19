#include<stdio.h>
#include<string.h>
int main()
{
char a[100], b[100];
printf("enter first string\n");
scanf("%s",a);
printf("enter secong string\n");
scanf("%s",b);
if(strcmp(a,b)==0)
printf("entered strings are same\n");
else
printf("entered strings are not same\n ");
return 0;
}
