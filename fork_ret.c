#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
//#include<sys/stat.h>
//#include<sys/types.h>
int main()
{
int ret1,ret2;
ret1 = fork();
printf("ret1=%d\n",ret1);
ret2 = fork();
printf("ret2=%d\n",ret2);
return 0;
}

