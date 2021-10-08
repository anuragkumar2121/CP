#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){
int a;
char input[100];
printf("Enter the string ");
scanf("%s",input);
a=strlen(input);

for(int i=0;i<a;i++){
    if(islower(input[i])==0){
        input[i]=tolower(input[i]);
        printf("%c",input[i]);

    }else{
        input[i]=toupper(input[i]);
        printf("%c",input[i]);
    }
}
}