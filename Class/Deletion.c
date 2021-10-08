#include <stdio.h>
void main(){
    int arr[30],input,num,position;
    printf("Please enter size-");
    scanf("%d",&input);
    for(int i=0;i<input;i++){
        printf("Enter the %d element of your array-",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Please the position you want to delete-");
    scanf("%d",&position);
    for(int i=position-1;i<input-1;i++){
        arr[i]=arr[i+1];
    }
    input--;
    for(int i=0;i<input;i++){
        printf("%d ",arr[i]);
    }
}