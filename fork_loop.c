#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
//#include<sys/stat.h>
//#include<sys/types.h>
int main()
{
int i,j=0;
  for(i=0;i<2;i++)
  {
  fork();
  printf("Hello%d\n",++j);
  }
return 0;
}

