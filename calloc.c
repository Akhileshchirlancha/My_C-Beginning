#include<stdio.h>
int main()
{
int *ptr = (int*) calloc(10 ,sizeof (int));
if (ptr == NULL) 
{
  printf("Could not allocate memory\n");
  exit(-1);
} 
else
  printf("Memory allocated successfully.\n");
return 0;
}
