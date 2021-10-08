#include <stdio.h>
void main(){
    int arr[30],input,num,T;
    printf("Please enter size-");
    scanf("%d",&input);
    for(int i=0;i<input;i++){
        printf("Enter the %d element of your array-",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<input-1;i++){
        for(int j=i+1;j<input;j++){
            if(arr[i]>arr[j]){
                num=arr[i];
                arr[i]=arr[j];
                arr[j]=num;
            }
        }
    }
    for(int i=0;i<input;i++){
        printf("%d ",arr[i]);
    }
}