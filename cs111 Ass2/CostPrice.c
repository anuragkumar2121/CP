#include<stdio.h>



int main(){


    double sp,profit,CostPerItem;
    printf("Enter the selling price: ");
    scanf("%lf",&sp);
    printf("Enter the profit: ");
    scanf("%lf",&profit);
    CostPerItem = (sp-profit)/15;
    printf("%f",CostPerItem);
    return 0;

    
}