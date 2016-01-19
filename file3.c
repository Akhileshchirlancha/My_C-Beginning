#include<stdio.h>
#include<stdlib.h>
struct emp
{
   char name[10];
   int age;
};

int main()
{
   struct emp e;
   FILE *p,*q;
   int ret;
   p = fopen("akhil4.txt", "a");
   q = fopen("akhil4.txt", "r+");
 printf("ret value for q file = %d\n",ret);
   printf("Enter Name and Age: ");
   scanf("%s %d", e.name, &e.age);
   fprintf(p,"%s %d\n", e.name, e.age);
   fclose(p);
#if 0
   do
   {
      fscanf(q,"%s %d", e.name, &e.age);
      printf("%s %d", e.name, e.age);
   }
   while( !feof(q) );
 fclose(q);
#endif
   return 0;
}
