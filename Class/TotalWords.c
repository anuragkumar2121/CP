#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int len,count=0;
    char str[1000];
    printf("Enter the string: ");
    fgets(str, 1000, stdin);
    len= strlen(str);

    for(int i= len-1; i>=0; i--){
        if(str[i]==' '){
            count++;
        }
    }
    printf("Number of Words is :%d",count+1);
}