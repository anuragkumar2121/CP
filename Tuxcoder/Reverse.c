#include<stdio.h>
int main(int argc, char const *argv[])

{
    
    int N,K;
    scanf("%d",&N);
    scanf("%d",&K);
    return 0;
    int intail=1;
    for(int i=0;i<N;i++){
        intail*=K;
    }
}
