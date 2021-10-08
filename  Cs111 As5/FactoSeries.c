#include <stdio.h>

double factorial(double n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}

double factoSum(double n){
    if(n==1){
        return 1;
    }
    return 1/factorial(n) + factoSum(n-2);
}


int main(int argc, char const *argv[])
{
    double n=5;
    printf("\n%f\n",factoSum(n));
    return 0;
}
