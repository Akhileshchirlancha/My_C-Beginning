#include <stdio.h>
#define  message_for(a, b)  \
   printf(#a " and " #b " are brothers\n")
int main(void) 
{
   message_for(Akhilesh,Ramana);
   return 0;
}
