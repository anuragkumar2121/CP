#include<stdio.h>
int main(int argc, char const *argv[])
{
    int ans=0,input,remain;
    scanf("%d",&input);
    
    remain= input%10;
    ans = ans*10+remain;
    input /= 10;

    remain= input%10;
    ans = ans*10+remain;
    input /= 10;

    remain= input%10;
    ans = ans*10+remain;
    input /= 10;

    remain= input%10;
    ans = ans*10+remain;
    input /= 10;

    remain= input%10;
    ans = ans*10+remain;
    input /= 10;

    printf("%d\n",ans);
    return 0;
}
