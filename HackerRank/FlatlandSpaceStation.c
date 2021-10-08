#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n, sta, min=0,dis;
    printf("No. of citites: ");
    scanf("%d",&n);
    printf("No of stations: ");
    scanf("%d",&sta);
    int arr[sta],arr2[n];
    for(int i=0; i<sta; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        min=n;
        for(int j=0; j<sta;j++){
            dis=arr[j]-i;
            if(dis<0){
                dis= dis*-1;
            }
        if(dis<min){
            min=dis;
        }
        }
        arr2[i]=min;
        
    }

    int ans;
    ans=arr2[0];
    for(int i=0; i<n; i++){
        if(ans<arr2[i]){
            ans=arr2[i];
        }
    }
    printf(" ans is %d",ans);
    return 0;
}
