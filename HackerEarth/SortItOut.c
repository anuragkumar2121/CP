//https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/sort-it-out/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[30], input,temp,arr2[30];
    printf("Please enter size-");
    scanf("%d", &input);
    for (int i = 0; i < input; i++)
    {
        printf("Enter the %d element of your array-", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<input;i++){
        arr2[i]=arr[i];
    }
    for(int i=0;i<input-1;i++){
        for(int j=0;j<input-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0; i<input; i++){
        for(int j=0; j<input; j++){
            if(arr[i]==arr2[j]){
                arr2[j]=247893243;
                printf("%d ",j);
                break;
            }
        }
    }
    return 0;
} 


// Probelm is there in finding common values in array as their maybe repeated values which cause error so
//see that code of that array part and try do again
