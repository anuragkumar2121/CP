#include <stdio.h>
int main(int argc, char const *argv[])
{
    int N,E;
    scanf("%d",&N);
    int arr[N];

    for (int i = 0; i < N; i++){
        scanf("%d",&arr[i]);
    }
    int arrR[N];

    for (int i = 0; i < N; i++)
    {
        arrR[i]= arr[N-i-1];
    }
    for(int i=0; i<N ; i++){
        printf("%d ",arrR[i]);
    }
    return 0;
}
