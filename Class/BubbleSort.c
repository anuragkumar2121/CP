#include <stdio.h>
void main(){
    int arr[30],input,num,T;
    printf("Please enter size-");
    scanf("%d",&input);
    for(int i=0;i<input;i++){
        printf("Enter the %d element of your array-",i+1);
        scanf("%d",&arr[i]);
    }
    T=0;
    while(T<input){
    for(int i=0;i<input-1-T;i++){
        if (arr[i]>arr[i+1]){
            num=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=num;
            
            }
    }T++; 
         
    }
for(int i=0;i<input;i++){
    printf("%d ",arr[i]);
}
}