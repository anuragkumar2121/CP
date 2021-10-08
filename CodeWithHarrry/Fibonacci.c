#include<stdio.h>

int fibbo(int N){
    if(N==0){
        return 0;
    }
    else{ if(N==1){
            return 1;
        }
    else{
    int resultant;
    resultant=fibbo(N-1) + fibbo(N-2);
    return resultant;}
}
}

int main()
{
    int N;
    printf("Enter the number");
    scanf("%d",&N);
    int Fibonacci = fibbo(N);
    printf("\nThe fibonacci value is %d\n",Fibonacci);
    return 0;
}
