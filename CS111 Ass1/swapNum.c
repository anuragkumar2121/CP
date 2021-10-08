#include<stdio.h>
int main()
{
    double a, b,temp;
    scanf("%lf",&a);
    scanf("%lf",&b);
    printf("The initial value of a is %f and b is %f\n",a,b);
    temp = a;
    a=b;
    b=temp;
    printf("\nThe final value of a is %f and b is %f\n",a,b);

    return 0;
}
