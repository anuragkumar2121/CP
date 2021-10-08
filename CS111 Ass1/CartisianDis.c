#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,y1,y2;
    printf("\nEnter x1");
    scanf("%lf",&x1);
    printf("\nEnter x2");
    scanf("%lf",&x2);
    printf("\nEnter y1");
    scanf("%lf",&y1);
    printf("\nEnter y2");
    scanf("%lf",&y2);

    double disSqua = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    double dis = pow(disSqua,0.5);

    printf("The distance is %f",dis);

    return 0;
}
