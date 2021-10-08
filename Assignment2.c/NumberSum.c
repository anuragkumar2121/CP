#include <stdio.h>
void main(){
    int ans=0,input,n,i=0;
    printf("How many number sum you want? ");
    scanf("%d",&n);
    while(i>=0){
        printf("Enter value #%d ",i+1);
        scanf("%d",&input);
        ans+=input;
        i++;
        if(i==n){
            break;
        }
        
    }
printf("And you sum is %d if you liked give :)",ans);
}