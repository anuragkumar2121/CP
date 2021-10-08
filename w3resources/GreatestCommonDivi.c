#include<stdio.h>
int main()
{
    int i1,i2,GCD;
    scanf("%d %d",&i1,&i2);
    for(int i=1;i<=i1;i++){
        if(i1%i==0 && i2%i==0){
            GCD=i;
        }   
    }printf("%d",GCD);
    return 0;
}
