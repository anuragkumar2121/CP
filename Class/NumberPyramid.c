#include <stdio.h>
int main()
{
    int n, m=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i+=2){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d ",m++);
        }
        printf("\n");
    }
        return 0;
}