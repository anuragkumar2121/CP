#include <stdio.h>
void main(){
    int ans=0,input,remain;
    printf("Enter the number sum you want? ");
    scanf("%d",&input);
    
    remain = input%10;
    ans += remain;
    input /= 10;

    remain = input%10;
    ans += remain;
    input /= 10;

    remain = input%10;
    ans += remain;
    input /= 10;

    remain = input%10;
    ans += remain;
    input /= 10;

    remain = input%10;
    ans += remain;
    input /= 10;
    
    printf("%d\n",ans);
}