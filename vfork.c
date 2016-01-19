#include<stdio.h>
#include<unistd.h>
#include<wait.h>
#include<sys/types.h>
int main()
{
int ret;
ret=vfork();
 if(ret==0)
 {
 printf("child\n");
 }
 else
 {
 printf("parent\n");
 waitpid(-1,&ret,0);
 } 
return 0;
}
