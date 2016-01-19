#include<stdio.h>
#define IN 1
#define OUT 0
int main()
{
int c,nl,nc,nw,state;
state=OUT;
nc=nw=nl=0;
 while((c=getchar()) != EOF)
{
 ++nc;
 if(c=='\n')
   ++nl;
 if(c==' '|| c== '\n'||c== '\t')
 state = OUT;
 else if(state==OUT)
  {
  state = IN;
  ++nw;
  }
}
printf("no. of lines: %d\n",nl);
printf("no. of words: %d\n",nw);
printf("no. of characters: %d\n",nc);
return 0;
}
