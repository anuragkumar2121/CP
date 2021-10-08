#include <stdio.h>
void printNatural(int input){
if(1 > input){
    return;
}
printf("%d ",input);
printNatural(input-1);
}
void main(){
    printf("Enter the value of n: ");
    int n;
    scanf("%d",&n);
    printNatural(n);
}