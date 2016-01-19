#include<stdio.h>
#define IN 1
#define OUT 0
#define MYSTRING "IAMAGOODPROGRAMER"
#define TEMPERATURE (37.29) 
#define SUM(A,B) (A+B)
#define VERSION 3.10 
int gvar = 0;
int fun(int a , int b);
int main()
{
int res = 0;
char d,e;
res=fun(IN,OUT);
printf("the sum is:%d\n",res);
printf("...\n");
printf("my string is:%s\n",MYSTRING);
printf("sum is:%d\n",SUM(20,30));
}
int fun(int a , int b)
{
return a+b;
}
