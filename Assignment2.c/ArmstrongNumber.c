#include<stdio.h>
int main()
{   int ans=0,num,n;
printf("Enter the number- ");
    scanf("%d",&num);
    int temp = num;
    for(int i=1;i<=3;i++){
        n=num%10;
        ans+=n*n*n;
        num/=10;
        if(num==0){
            break;
        }
    }
    if(ans==temp){
        printf("Yes Armstrong :)");
    }else{
        printf("No Armstrong :(");
    }
    return 0;
}
