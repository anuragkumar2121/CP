#include <stdio.h>
int main() {
int input;
start:
printf("Please give a input- ");
scanf("%d",&input);
if(input<=0){
    goto start;
return 0;
}

if(input%100==0){
    if(input%400==0){
        printf("It is a leap year");
    }else{
        printf("It is not a leap year");
    }
}else {if(input%4==0){
    printf("It is a leap year");
}else{
    printf("It is not a leap year");
}
return 0;
}}