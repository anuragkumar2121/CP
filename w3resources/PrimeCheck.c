#include<stdio.h>
int main()
{
    int test,num;
    printf("Enter NUmber to check ? ");
    scanf("%d",&num);
    if(num==1){
        printf("Not a prime number");
    }
    for(int i=2;i<=num/2;i++){
    if(num%i==0){
        printf("It is a not prime number");
        break;
    }
    }

    return 0;
}
