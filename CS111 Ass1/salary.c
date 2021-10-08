#include<stdio.h>
int main()
{
    double BasicP;
    scanf("%lf",&BasicP);
    printf("The Gross Pay is %f", (BasicP+40*BasicP/100+20*BasicP/100));
    return 0;
}
