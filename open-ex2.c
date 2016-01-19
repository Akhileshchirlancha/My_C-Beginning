#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
int main()
{
    int fd = open("testfile.txt", O_WRONLY | O_CREAT, 0777);
    if(fd < 0)
     {
     printf("open failed\n");
        return 1;
      }
    if(write(fd,"This will be output to testfile.txt\n", 4096) != 36)
    {
        printf("There was an error writing to testfile.txt\n");
        return 1;
    }
    return 0;
}

