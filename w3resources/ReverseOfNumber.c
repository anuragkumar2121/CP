#include <stdio.h>
int main()
{
    int n,num,revNum=0;
    printf("Enter the Number");
    scanf("%d",&num);
    while(num>0){
        n=num%10;
        revNum= n + 10*revNum;
        num/=10;
    }
    printf("The reverse number is %d",revNum);
    return 0;
}
