#include<stdio.h>
#include<string.h>
#define MAX 1000
int main(int argc, char const *argv[])
{
    char input[MAX];
    printf("Enter the string: ");
    fgets(input,MAX,stdin);
    int len = strlen(input);
    int alpha=0,Num=0,Special=0;
    for(int i=0;i < len;i++){
        if( input[i]<='9' && input[i]>='0'){
            Num++;
        }else{
            if((input[i]>='A' && input[i]<='Z') || (input[i]>='a' && input <= 'z')){
                alpha++;
            }else{
                Special++;
            }
        }
    }
    printf("Number of Alphabets are %d , Number of Num Characters are %d , Number of Special characters are %d", alpha,Num, Special );
    return 0;
}
