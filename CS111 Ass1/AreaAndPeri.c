#include <stdio.h>
#include <math.h>
#define PI 3.14

int main()
{
    double r,area,perimeter;
    scanf("%lf",&r);
    perimeter= 2*PI*r;
    area= PI*r*r;
    printf("The perimeter is %f and the area is %f",perimeter,area);
}
