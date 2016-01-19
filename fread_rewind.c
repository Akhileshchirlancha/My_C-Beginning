#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp = NULL;

    short x[10] = {1,2,3,4,5,6,5000,6,-10,11};
    short result[10];

    fp=fopen("filefread.txt", "w+");

    if(fp != NULL)
    {
        fwrite(x, sizeof(short) , 10, fp);
        rewind(fp);
        fread(result, sizeof(short) , 10, fp);
    }
    else
        exit(0);

    printf("\nResult");
    printf("\n%d",result[0]);
    printf("\n%d",result[1]);
    printf("\n%d",result[2]);
    printf("\n%d",result[3]);
    printf("\n%d",result[4]);
    printf("\n%d",result[5]);
    printf("\n%d",result[6]);
    printf("\n%d",result[7]);
    printf("\n%d",result[8]);
    printf("\n%d",result[9]);

    fclose(fp);
return 0;
 }
