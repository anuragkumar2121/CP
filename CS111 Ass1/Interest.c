#include <stdio.h>
#include <math.h>

int main()
{
    double simpleIn,compoundIn,principle,interestRate,timePeriod;
    scanf("%lf",&principle);
    scanf("%lf",&interestRate);
    scanf("%lf",&timePeriod);


    simpleIn = principle*interestRate*timePeriod/100;

    compoundIn= principle*(pow((1+interestRate/100),timePeriod)) - principle;

    printf("Simple interest is %lf and compound interest is %lf",simpleIn,compoundIn);

    return 0;
}
