#include<stdio.h>
#define Max 100
void main(){
    int T,N,arr[Max],i=0,duplicate=0,v;
    printf("Enter the number of test cases:");
    scanf("%d",&T);
    while(T!=0){
        printf("Enter the length of array: ");
        scanf("%d",&N);
        
        for(i=0;i<N;i++){
            printf("Enter the value number %d: ",i);
            scanf("%d",&arr[i]);
        }
        for(i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(arr[i]==arr[j] && i != j){
                    for(int k=0;k<N;k++){
                        if(arr[k]==arr[j]){
                            arr[k]=v;
                            v = 2074044000;
                            v++;
                        }
                    }
                    duplicate += 1;
                    printf("Hello");
                    break;
                }
            }
            
        }
        for(i=0;i<N;i++){
            printf("\n%d\n",arr[i]);
        }
        printf("%d",duplicate);
        T--;
    }
}