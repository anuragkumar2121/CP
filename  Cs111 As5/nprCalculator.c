#include <stdio.h>

long factorial(long n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}
long npr(long n, long r){
    return factorial(n)/factorial(n-r);
}

long main(long argc, char const *argv[])
{
    long n,r;
    scanf("%ld%ld",&n,&r);
    printf("\n%ld\n",npr(n,r));
    return 0;
}
