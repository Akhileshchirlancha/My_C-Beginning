#include<stdio.h>
#define SUM(A, B) (A + B)
#define PROD(A, B) (A * B)
int main()
{
 int num1, num2, sum, product;
 printf("\nEnter the Two numbers\n");
 scanf("%d%d",&num1,&num2);
 sum=SUM(num1,num2);
 product=PROD(num1,num2);
 printf("\n\nSum of two numbers using Macros is:%d\n",sum);
 printf("\n\nProduct of two numbers using macros is:%d\n",product);
 return 0;
}
