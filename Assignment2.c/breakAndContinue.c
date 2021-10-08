#include<stdio.h>
int main()
{
    int x;
    printf("Give value of x ");
    scanf("%d",&x);/********For Break**********/
    switch(x){
        case1: printf("Apple");
    break;
        case2: printf("Banana");
    break;
        case3: printf("Pineapple");
    break;
        default: printf("Mango");
    break;
    }
    printf("\n");

    /**************************For Continue***************************/
    for(int i=0; i<=8; i++)
    {
        if(i==7){
            continue;
        }
        printf("Value of i is %d ",i);
    }
    return 0;
}
