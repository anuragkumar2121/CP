#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n ; i++){
        scanf("%d",&arr[i]);
    }

    int max = arr[1] + arr[2];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int sum = arr[i] + arr[j];
            if(sum>max && i!=j){
                max = sum;
            }
        }
    }
    printf("\nThe maximum is %d\n",max);
    return 0;
}