#include <stdio.h>
int main()
{
    int n;
    for(int i=1;i<=4;i++){
    for(int j=1;j<=4-i;j++){
        printf(" ");
    }
    for(int k=1;k<=i;k++){
    printf("* ");
    
    }printf("\n");
    }
    for(int i=4;i>=1;i--){
        for(int j=1;j<=4-i;j++){
        printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
