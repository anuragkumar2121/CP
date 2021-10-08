#include <stdio.h>
int fibonac(int n){
    if(n<=0){
        return 0;
    }
    int arr[n];
    int last1;
    int last2;
    if(n==1){
        arr[0] =0;
    }else if(n==2){
        arr[0] = 0;
        arr[1] = 1;
    }else{
        last1 =1;
        last2 = 0;
        
        arr[0] =0;
        arr[1] = 1;
        for(int i=2; i<n; i++){
            int sum = last1 + last2;
            last2 = last1;
            last1 = sum;
            arr[i] = sum;
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    fibonac(n);
    return 0;
}
