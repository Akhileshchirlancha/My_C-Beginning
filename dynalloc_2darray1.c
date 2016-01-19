#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int r, c ;
    printf("enter the rows and columns: \n");
    scanf("%d %d",&r,&c);
    int *arr = (int *)malloc(r * c * sizeof(int));
 
    int i, j, count = 0;
    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         *(arr + i*c + j) = ++count;
 
    for (i = 0; i <  r; i++)
     {
      for (j = 0; j < c; j++)
       {
         printf("%d\t ", *(arr + i*c + j));
	}
    printf("\n");
     }
 
   return 0;
}
