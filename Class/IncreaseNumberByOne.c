#include<stdio.h>
void main(){
    int input,t1,t2,t3,t4;
    printf("Enter the number - ");
    scanf("%d",&input);
        t4=input%10;
    input/=10;
        t3=input%10;
    input/=10;
        t2=input%10;
    input/=10;
        t1=input%10;
    input/=10;

    t4+=1;
    t3+=1;
    t2+=1;
    t1+=1;
    printf("%d%d%d%d",t1,t2,t3,t4);

}