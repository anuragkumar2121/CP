//ONLINEGDB
#include<stdio.h>
#include<math.h>

int Factorial(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n*Factorial(n-1);
    }
    
}

int main(int argc, char const *argv[])
{
    int n;
    double sum=0,x;
    scanf("%d %lf",&n, &x);
    for (int i = 0; i <= n; i++)
    {
        sum+=pow(x,i)/Factorial(i);
    }
    printf("%f",sum);
    
    return 0;
}
