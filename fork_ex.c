#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
//#include<sys/stat.h>
//#include<sys/types.h>
int main()
{
int ret;
ret = fork();
//getpid();
ret = fork();
printf("ret=%d\n",ret);
printf("ret=%d\n",ret);
//printf("%d\n",getpid());
#if 0
  if(ret==0)
  {
//   ret = fork();
//   getpid();
//   printf("%d\n",ret);
   printf("I am child\n");
  }
  else
  {
//   ret = fork();
//   getpid();
//   printf("%d\n",ret);
   printf("I am parent\n");
  }
#endif
return 0;
}
