#include <stdio.h>
void main(){
    int arr[30],input,num,position;
    printf("Please enter size-");
    scanf("%d",&input);
    for(int i=0;i<input;i++){
        printf("Enter the %d element of your array-",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you want to insert-");
    scanf("%d",&num);
    printf("Please the position you want to insert to-");
    scanf("%d",&position);
    if(position<=input+1 || position>0){
        for(int i=input;i>=position;i--){
            arr[i]=arr[i-1];
        }
    }else{printf("Invalid");}
    arr[position-1]=num;
    input++;
    for(int i=0;i<input;i++){
        printf("%d ",arr[i]);
    }
}