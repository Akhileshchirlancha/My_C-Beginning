#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
fork();
printf("Hello\n");
fork();
printf("Hello 1\n");
fork();
return 0;
}
