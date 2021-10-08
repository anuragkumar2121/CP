#include<stdio.h>
int main(int argc, char const *argv[])
{
    int ans=0,sum=0,input,remain;
    scanf("%d",&input);
    

    while (input!=0)
    {
    remain= input%10;
    ans = ans*10+remain;
    sum += remain;
    input /= 10; 
    }
    
    printf("The sum of digits is %d and reverse of number is %d\n",sum,ans);
    return 0;
}