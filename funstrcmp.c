#include<stdio.h>
#include<string.h>
 
int my_strcmp(char [], char []); 
 
int main()
{
   int flag,i=0,c,d;
   char a[20], b[20];
strings:
   printf("\nInput first string\n");
   gets(a);
 
   printf("\nInput second string\n");
   gets(b);

   if(a[i] == '\0')
   printf("\nyou have entered 1st string as 'NULL' string\n");
   if(b[i] == '\0')
   printf("\nyou have entered 2nd string as  'NULL' string\n");

 	if(a[i] == '\0' && b[i] == '\0')  
  	{
   	printf("two strings are 'NULL' we won't compare strings\n");
   	goto strings;
 	 }

  else

  {
      c=strlen(a); 
      printf("  1st string length == %d\n",c);    
      d=strlen(b);
      printf("  2st string length == %d\n",d);    

 #if 1
 
     if(c>21)
	{
	printf("\n1st string length should be less than 20 characters\n");
	}
     if(d>21)
	{
	printf("\n2nd string length should be less than 20 characters\n");
	}
 #endif
  
   flag = my_strcmp(a, b);

 //  printf("flag return value == %d\n",flag); 

       if (flag == 0)
        printf("Entered strings are equal.\n");
       else
        printf("Entered strings are not equal.\n");
  } 
   return 0;
}
 
int my_strcmp(char a[], char b[])
{
   int c = 0;
 
   while (a[c] == b[c]) 
   {
      if (a[c] == '\0' || b[c] == '\0')
         break;
      c++;
   }
 
   if (a[c] == '\0' && b[c] == '\0')
      return 0;
   else
      return 1;
}
