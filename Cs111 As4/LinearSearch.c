#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n,num;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter number you want to find: ");
    scanf("%d",&num);
    int ans =0,index;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==num){
            ans=1;
            index=i;
        }
    }

    if(ans==1){
        printf("The element is present at index %d\n", index);
    }else{
        printf("The element is not present\n");
    }
    
    return 0;
}
