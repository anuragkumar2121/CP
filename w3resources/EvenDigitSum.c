#include<stdio.h>
void main(){
    int input,n,sum=0;
    scanf("%d",&input);
    while(input>0){
        n=input%10;
        input/=10;
        if(n%2==0){
            sum+=n;
        }
        }
        printf("%d",sum);
    }