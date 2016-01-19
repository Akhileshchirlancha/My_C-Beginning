#include<stdio.h>
int main()
{
double nc;
for(nc=0;getchar() != EOF;nc++)
printf("%e\n",nc);
return 0;
}
