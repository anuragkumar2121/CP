#include <stdio.h>
int main(){
    char c= '*';
    int input;
    scanf("%d",&input);
    for(int i=1;i<=input;i++){
        for(int j=1;j<=i;j++){
        printf("%c",c);
        }
        printf("\n");
    }
}