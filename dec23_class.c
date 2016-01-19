#include<stdio.h>
#include<stdlib.h>
int main()
{
int m=0,n=0;
int i=0,j=0;
// int a[m][n];
int **a;
printf("enter the dimensions of array\n");
scanf("%d%d",&m,&n);
 a=malloc(sizeof(int)*m);
 for()
 for(i=0;i<m;i++)
 {
   for(j=0;j<n;j++)
   { 
     a[i][j]= rand()%10;
   }
 }
 for(i=0;i<m;i++)
 {
   for(j=0;j<n;j++)
   { 
     printf("%d",a[i][j]);
   }
     printf("\n");
 }
return 0;
}
