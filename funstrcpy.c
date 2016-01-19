#include<stdio.h>
#include<string.h>

void my_strcpy(char[] , char[]);

int main()
{
 char s1[20],s2[20];
 printf("Input string: \n");
 gets(s1);
 my_strcpy(s1,s2);
 printf("copied string:\n\"%s\"\n",s2);
 return 0;
}
 
void my_strcpy(char s1[] , char s2[])
{
int i=0;
 while(s1[i]!='\0')
  {
  s2[i]=s1[i];
  i++;
  }
  s2[i]='\0';
}
