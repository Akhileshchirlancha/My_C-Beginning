#include<stdio.h>
#include<unistd.h>
int main()
{
int a=5;
int *ptr;
ptr=&a;
#if 0
printf("%u\n",*ptr);
printf("%u\n",ptr);
printf("%u\n",++*ptr);
printf("%u\n",++ptr);
#endif
// printf("%u\n",++(*ptr));
 printf("%u\n",++(ptr));
 printf("%u\n",(ptr));
}
