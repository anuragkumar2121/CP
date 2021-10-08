// https://www.hackerrank.com/challenges/the-hurdle-race/problem
#include<stdio.h>
int main()
{
    int NumHur,NaturalHei,arr[10000],Lotion;
    printf("-----------------------------------");
    scanf("%d",&NumHur);
    scanf("%d",&NaturalHei);
    for(int i=0; i<NumHur; i++){
        scanf("%d",&arr[i]);
    }
    int Max=arr[0];
    for(int i=0; i<NumHur;i++){
        if(arr[i]>Max){
            Max=arr[i];
        }
    }
    Lotion= Max-NaturalHei;
    if(Lotion>=0){
        printf("%d",Lotion);
    }
    else{
        printf("%d",0);
    }
    return 0;
}
    