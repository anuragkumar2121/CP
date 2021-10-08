#include <stdio.h>
void main (){
    int EnterNum,a,sum=0;
    printf("Enter number of which you want sum - ");
    scanf("%d",&EnterNum);
    for(int i=1;i<=EnterNum;i++){
    printf("Give Number %d - ",i);
    scanf("%d",&a);
    sum+=a;
    }
    printf("Sum of given Numbers is %d \n", sum);
    printf("Average of given number is %f",(double)sum/EnterNum);
}