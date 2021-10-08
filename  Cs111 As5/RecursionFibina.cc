#include <stdio.h>

void fibonac(int n){
    static int n1=1, n0=0, n2;

    if(n>0){
        n2 = n0+ n1;
        n0 = n1;
        n1 = n2;
        printf("%d ",n2);
        fibonac(n-1);
    } 
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    if(n>=2){
        printf("%d %d ",0,1);
        fibonac(n-2);
    }else if(n==1){
        printf("%d",0);
    }
    return 0;
}
