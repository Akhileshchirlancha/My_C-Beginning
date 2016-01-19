#include <stdio.h>
#define PI 3.1415
#define area(radius) (PI*(radius)*(radius))
int main(){
    int radius;
    float area;
    printf("Enter the radius: ");
    scanf("%d",&radius);
    area=area(radius);
    printf("Area=%.2f\n",area);
    return 0;
}
