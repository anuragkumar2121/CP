#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c>=65 && c<=90){
        printf("\nUppercase\n");
    }else if(c>=97 && c<=122){
        printf("\nLowercase\n");
    }else if(c>=48 && c<= 57) {
        printf("\nDigit\n");
    }else{
        printf("\nSpecial Character\n");
    }
    return 0;
}
