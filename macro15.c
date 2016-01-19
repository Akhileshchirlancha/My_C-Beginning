#include<stdio.h>
#define MAX(a, b) ((a) < (b) ? (b) : (a))
int main()
{
int x = 5, y = 10;
int z = MAX(x,y);
printf("%d",z);

return 0;
}
