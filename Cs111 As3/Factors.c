#include<stdio.h>
int main(int argc, char const *argv[])
{
    int input;
    printf("Enter the element: ");
    scanf("%d",&input);

    for(int i=1; i<= input/2; i++){
        if(input%i==0){
            printf("\n%d",i);
        }
    }
    return 0;
}
