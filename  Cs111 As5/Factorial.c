#include <stdio.h>

long factorial(long n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}

long main(long argc, char const *argv[])
{
    long n;
    scanf("%ld",&n);
    printf("\n%ld\n",factorial(n));
    return 0;
}
