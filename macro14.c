#include<stdio.h>
#define SWAP(a, b)  a ^= b; b ^= a; a ^= b; 
int main()
{
int x = 10;
int y = 5;
SWAP(x, y);
printf("x=%d and y=%d\n",x,y);
return 0;
}
