#include<stdio.h>
#include<string.h>
#define MAX 1000
int main(int argc, char const *argv[])
{
    char input[MAX],len;
    printf("Enter the string: ");
    fgets(input,MAX,stdin);
    len=strlen(input);
    for(int i=0; i<len-1;i++){
        for(int j=0;j<len-1;j++){
            printf("%c",input[0]);
            
            if(input[j]>input[j+1]){
                char temp =input[j];
                input[j]=input[j+1];
                input[j+1]=temp;
            }
        }
    }
	      for(int i=1;i<len;i++){
		 printf("%c",input[i]);}
}