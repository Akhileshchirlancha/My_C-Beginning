#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int *ptr,i,n1,n2;
    char ch;
    printf("Enter size of array: ");
    scanf("%d",&n1);
    ptr=(int*)malloc(n1*sizeof(int));
    printf("Address of previously allocated memory: ");
   	 for(i=0;i<n1;++i)
   	 {
         printf("%u\t",ptr+i);
   	 }
    printf("\nEnter new size of array: ");
    scanf("%d",&n2);
    ptr=realloc(ptr,n2);
    printf("Adress of reallocated memory:");
    	for(i=0;i<n2;++i)
   	 {
         printf("%u\t",ptr+i);
    	 }
   printf("\n");
   printf("do you want to release allocated memory enter 0");
   scanf("%d",&i);
   if( i == 0) { 
    	printf("Adress after free():\n");
    	free(ptr);
    		for(i=0;i<n2;++i)
        	{
         	printf("%u\t",ptr+i);
        	}
    	}
    return 0;
}

