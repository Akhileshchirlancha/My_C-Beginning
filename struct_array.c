#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct person
{
     int id;
     char name[10];
     float luggage;
};

int main()
{
     int i;
     struct person p[2];

     p[0].id=1;
     strcpy(p[0].name, "Akhilesh");
     p[0].luggage = 4.4;

     p[1].id=2;
     strcpy(p[1].name, "Mahesh");
     p[1].luggage = 5.5;

     p[2].id=3;
     strcpy(p[2].name, "venu");
     p[2].luggage = 6.6;

     printf("Luggage Weight In KG's:\n\n ");

     for(i=0; i<3; i++)
     {
         printf("S.No is: %d \n", p[i].id);
         printf("Name is: %s \n", p[i].name);
         printf("luggage Weight is: %.2f\n\n",p[i].luggage);
     }
     return 0;
}
