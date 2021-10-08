#include <stdio.h>
int main()
{
    int L,W,H,N;    
    printf("Enter the ideal size-");
    scanf("%d",&L);
    printf("How many images you do have?-");
    scanf("%d",&N);

    while(N!=0){
    printf("Enter the length-");
    scanf("%d",&W);
    printf("Enter the bredath-");
    scanf("%d",&H);
    if(W<L || H<L){
        printf("UPLOAD ANOTHER");
    }else{
        if(W==H){
            printf("ACCEPTED");
        }else{
            printf("CROP IT");
        }
    }
    N--;
    }


    return 0;
}

