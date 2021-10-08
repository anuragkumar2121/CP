//www.hackerrank.com/contests/tuxcoder-21/challenges/rectangular-grid-game/problem
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int m,n,T;
    scanf("%d",&T);
    while (T!=0)
{
    scanf("%d",&m);
    scanf("%d",&n);
    
    if(m==1&&n==1){
        printf("Second \n");
    }else{
        printf("First \n");
    }
        return 0;
        T--;
    }
}