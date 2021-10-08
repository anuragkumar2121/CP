#include<stdio.h>
#define Max 100
int main()
{
    int arr[Max],N,x=0;
    printf("Enter the the length of array: ");
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        printf("Enter the value %d of array: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        x=0;
        for(int j=0;j<N;j++){
            if(arr[i]==arr[j]){
                x++;
            }
        }
    if(x==1){
        printf("%d ",arr[i]);
    }
    }
    return 0;
}
