#include<stdio.h>
#define Max 100
void main(){
    int T,N,K,i,arr[Max],min,resultant;
    printf("Enter the number of test cases:");
    scanf("%d",&T);
    while(T!=0){
        printf("Enter the length of array: ");
        scanf("%d",&N);
        printf("Enter the value of threshold: ");
        scanf("%d",&K);
        for(i=0;i<N;i++){
            printf("Enter the value number %d: ",i);
            scanf("%d",&arr[i]);
        }
        min=arr[0];
        for(i=1;i<N;i++){
            if(arr[i]<arr[0]){
                min = arr[i];
            }
        }
        resultant= K - min;
        if (resultant>=0)
        {
           printf("%d",resultant);
           printf("\n");
        }
        else{
            printf("%d",0);
            printf("\n");
        }
        printf("%d",min);
        
        
        T--;
    }
    
}