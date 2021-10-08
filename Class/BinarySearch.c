#include <stdio.h>
void main(){
    int arr[30],input,num,T,first,last,search,mid;
    printf("Please enter size-");
    scanf("%d",&input);
    for(int i=0;i<input;i++){
        printf("Enter the %d element of your array in ascending order-",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the number that you want ot search -");
    scanf("%d",&search);
    first=0;
    last=input-1;
    
    while(last>=first){
        mid=(first+last)/2;
        if(arr[mid]==search){
            printf("The number is present at position %d",mid+1);
            break;
        }else if(arr[mid]>search){
            last=mid-1;
        }else{
            first=mid+1;
        }
    }if(first>last){
        printf("Matching number is not in the array");
    }
}   