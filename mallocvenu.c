#include<stdio.h>
#include<stdlib.h>
int main()
{

int i,n;
int *p;

 printf("enter no.of elements\n");
 scanf("%d",&n);
 //p=(int*)malloc(n*sizeof(int));
//free(p);

     printf("enter elements of array\n");
     for(i=0;i<n;i++)
        scanf("%d\n",&p[i]);
     for(i=0;i<n;i++)
        printf("p[%d] is %d\n",i,p[i]);
return 0;
}

