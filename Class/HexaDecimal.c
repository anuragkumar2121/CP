#include<stdio.h>
void main(){
    char input;
    printf("Enter you number -");
    scanf("%c",&input);
    printf("The number in hexadecimal format is %X",input);
    printf("\nThe number in octal format is %o",input);
    printf("\nThe number in decimal format is %d",input);
}