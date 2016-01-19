#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
int main()
{
mkdir("Test_2", 0777);
rmdir("Test_2");
return 0;
}
