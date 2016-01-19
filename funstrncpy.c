#include<stdio.h>
#include<string.h>

void my_strncpy(char [], char [], int );

int main()
{
  int num;
  char str1[20],str2[20];
  printf("enter source string\n");
  gets(str1);
  printf("enter num\n");
  scanf("%d",&num);

  my_strncpy(str1,str2,num);

  printf("copied string is:\"%s\" \n",str2);
  return 0;
}
void my_strncpy(char str1[], char str2[], int num)
{
    int i; 
    for(i=0 ; str1[i] != '\0' ; i++)    
    {
        if(i <= num-1)
        {
            str2[i] = str1[i];
        }
     }
}

