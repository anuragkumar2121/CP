#include<stdio.h>
void main(){
    int F_D,L_D,input;
    printf("Enter your nmber please");
    scanf("%d",&input);
    if(input>=10){
    F_D=input%10;
    while(input>9){
        input/=10;
    }
    L_D=input;
    int sum = L_D+F_D;
    printf("Your sum is %d",sum);}
    else{
        printf("Your sum is %d",input);
    }
}