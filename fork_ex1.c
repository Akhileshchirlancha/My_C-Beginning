#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
int ret1, ret2;
ret1=fork();
ret2=fork();
printf("ret1=%d\n",ret1);
printf("ret2=%d\n",ret2);
}
