#include <stdio.h>
double poly (double x, int n){
    double multiply= x, sum=0;
    for(int i=0; i<n; i++){
        sum += multiply;
        multiply *= x;
    }  
    return sum;
}

int main(int argc, char const *argv[])
{
    int n;
    double x;
    scanf("%lf%d",&x,&n);
    printf("%f\n", poly(x,n));

    return 0;
}
