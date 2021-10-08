#include<stdio.h>
#include<ctype.h>
void main (){
    char input,si[5];
    input='5';
    printf("When char is 5 islower out put is : %d",islower(input));
    input='c';
    printf("\nWhen char is c islower out put is : %d",islower(input));
    input='D';
    printf("\nWhen char is D islower out put is : %d",islower(input));
    printf("\n%d\n",islower('d'));
    scanf("%s",si);
    printf("\n%d",islower(si[3]));
    


}