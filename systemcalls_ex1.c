#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
int main()
{
//#if 0
int fd0 = open("file0", O_RDWR | O_CREAT, 0777);
// fd0 = open("file0", O_RDWR | O_CREAT, 0777);
int fd1 = open("file1", O_RDWR | O_CREAT, 0777);
int fd2 = open("file2", O_RDWR | O_CREAT, 0777);
int fd3 = open("file3", O_RDWR | O_CREAT, 0777);
int fd4 = open("file4", O_RDWR | O_CREAT, 0777);
int fd5 = open("file5", O_RDWR | O_CREAT, 0777);
int fd6 = open("file6", O_RDWR | O_CREAT, 0777);
int fd7 = open("file7", O_RDWR | O_CREAT, 0777);
int fd8 = open("file8", O_RDWR | O_CREAT, 0777);
int fd9 = open("file9", O_RDWR | O_CREAT, 0777);

//close(fd0);

#if 0
close(fd0);
close(fd1);
close(fd2);
close(fd3);
close(fd4);
close(fd5);
close(fd6);
close(fd7);
close(fd8);
close(fd9);
#endif

#if 1 
unlink("file0");
unlink("file1");
unlink("file2");
unlink("file3");
unlink("file4");
unlink("file5");
unlink("file6");
unlink("file7");
unlink("file8");
unlink("file9");
#endif
return 0;
}
