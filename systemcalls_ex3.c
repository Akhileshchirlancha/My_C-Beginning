#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
int main()
{
mkdir("Test_3", 0777);
//chdir("Test_3");
int fd = open("file1", O_RDWR | O_CREAT, 0777);
close(fd);
unlink("file1");
rmdir("Test_3");
return 0;
}
