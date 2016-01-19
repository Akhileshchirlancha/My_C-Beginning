#include<stdio.h>
#include<stdlib.h>
  
int main()
{
    int r,c;
 printf("enter the rows and columns: \n");
 scanf("%d%d",&r,&c);
    int **arr;
    int count = 0,i,j;
  
    arr  = (int **)malloc(sizeof(int *) * r);
    arr[0] = (int *)malloc(sizeof(int) * c * r);
 
    for(i = 0; i < r; i++)
        arr[i] = (*arr + c * i);
  
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            arr[i][j] = ++count;  // OR *(*(arr+i)+j) = ++count
  
    for (i = 0; i <  r; i++)
        {
        for (j = 0; j < c; j++)
            {
            printf("%d \t", arr[i][j]);
            }
        printf("\n");
        }
    return 0;
}
