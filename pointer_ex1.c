#include<stdio.h>
int main()
{
int *a;
int *h;
printf("sizeof *a = %d\n",sizeof(*a));
printf("sizeof *h = %d\n",sizeof(*h));
printf("sizeof a = %d\n",sizeof(a));
printf("sizeof h = %d\n",sizeof(h));
return 0;
}
