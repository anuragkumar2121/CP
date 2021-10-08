#include <stdio.h>

int main(){
    int N, num,n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the position of element placement: ");
    scanf("%d",&N);

    if(N >= n+2){
        return -1;
    }

    printf("Enter the number: ");
    scanf("%d",&num);

    int index= N-1;
    for(int i=n-1; i>=index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = num;

    for(int i=0 ; i<n+1 ; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}