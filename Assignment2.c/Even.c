#include<stdio.h>
int main()
{
    int input;
    printf("Enter your number - ");
    scanf("%d",&input);
    if(input<0){
        printf("Enter a non negative number");
    }
    else{if(input%2==0){
        printf("This is an even number");
    }
    else{
        printf("This is an odd number");}
    }

    return 0;
}
