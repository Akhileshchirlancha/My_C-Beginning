#include<stdio.h>
#include<stdlib.h>
int main() 
{
 int a[2][2],b[2][2],c[2][2],n=0,m=0,i=0,j=0,p=0,q=0,k=0,ret; 
 int *pt,*pt1,*pt2;
 printf("Enter size of 1st Matrix : ");
 scanf("%d %d",&m,&n); 
 printf("Enter size of 2nd Matrix : "); 
 scanf("%d %d",&p,&q);
     if(n!=p) 
      {
       printf("Multiplication cannot be done\n");
       exit (0);
      }
printf("enter 1st matrix elements:\n");
    for(i=0;i<m;i++)
    { 
        for(j=0;j<n;j++) 
            { 
            printf("Enter element no. %d %d : ",i,j);
            scanf("%d",&a[i][j]);
            }
    }
printf("enter 2nd matrix elements:\n");
   for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++) 
            {
            printf("Enter element no. %d %d : ",i,j);
            scanf("%d",&b[i][j]); 
            }
    }
pt=&a[0][0];
pt1=&b[0][0]; 
pt2=&c[0][0];
 for(i=0;i<n;i++) 
        { 
        for(k=0;k<q;k++) 
          { 
            *(pt2+(i*2+k))=0; 
            printf("location %u = ",(pt2+(i*2+k))); 
            for(j=0;j<m;j++)
            {
              *(pt2+(i*2+k))+=*(pt+(i*2+j))**(pt1+(j*2+k));
            }
            printf("value %d \n",*(pt2+(i*2+k))); 
          }
        }

printf("the multiplication of above two matrices is:\n");
 for(i=0;i<n;i++) 
 {
     for(j=0;j<q;j++) 
            { 
            printf("%d ",c[i][j]); 
            }
     printf("\n");
 }
 return 0;
 }
