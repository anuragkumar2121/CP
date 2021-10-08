#include<stdio.h>
#define Max 100
void main (){
    int arr[Max],arrE[Max],arrO[Max];
    int input,a,j=0,k=0;

    printf("Enter the size of the array");
    scanf("%d",&input);

    for(int i=0;i<input;i++){
        printf("Enter the element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<input;i++){
        a=arr[i]%2;
        
        if(a==0){
            arrE[j]=arr[i];
            j++;
        }
        else{
            arrO[k]=arr[i];
            k++;
        }
    }printf("Elements of arrE are :\n");
    for(int i=0;i<j;i++){
        printf("%d\n",arrE[i]);
    }
    printf("Elements of arrO are :\n");
    for(int i=0;i<k;i++){
        printf("%d\n",arrO[i]);
    }
}