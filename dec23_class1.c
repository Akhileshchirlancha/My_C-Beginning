#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int i=0,j=0;
int *a;
printf("enter the no. of elements required to print\n");
scanf("%d",&i);
a=(int*)malloc(sizeof(int)*i);
memset(a,1,i);
 for(j=0;j<i;j++)
 {
 printf("[%d]\n",a[j]);
 }
 for(j=0;j<i;j++)
 {
  a[j]=j*2;
 }
 for(j=0;j<i;j++)
 {
 printf("[%d]\n",a[j]);
 }
return 0;
}
