#include<stdio.h>
int main()
{
    int revNum=0,digit,num;
    printf("Please enter number - ");
    scanf("%d",&num);
    if (num<0){
        num= -1*num;
    }
    int test=num;
    while(num>0){
                digit=num%10;
        revNum= digit + 10*revNum;
        num/=10;
    }
    if(revNum==test){
        printf("Number is a palindrome");
    }else {
        printf("Number is not a palindrome");
    }
    return 0;
}
