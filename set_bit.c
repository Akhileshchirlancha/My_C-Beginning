#include<stdio.h>
int main()
{
 int bit,z=0;
 printf("enter bit to set ? \n");
 scanf("%d",&bit);
 z = z | (1<<bit);
 printf("z=%x \n",z);
return 0;
}
