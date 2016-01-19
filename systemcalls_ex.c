#include<fcntl.h>
//#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
int fd;
mkdir("test_1",0777);
chdir("test_1");
creat("file1",0777);
fd=open("file1",O_RDWR,0777);
write(fd,"Akhilesh\n",9);
close(fd);
}
