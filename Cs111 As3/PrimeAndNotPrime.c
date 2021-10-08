#include<stdio.h>
int isPrime(int num){
    int test;
    if(num==1){
        return 0;
    }
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n1,n2;
    scanf("%d %d",&n1 , &n2);
    printf("Primes are: \n");
    for (int i = n1+1; i < n2; i++)
    {
        if(isPrime(i)){
            printf("%d\n", i);
        }
    }
    printf("Non-Primes are: \n");
    for (int i = n1+1; i < n2; i++)
    {
        if(!isPrime(i)){
            printf("%d\n", i);
        }
    }
    
}