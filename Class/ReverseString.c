#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int len;
    char str[1000];
    printf("Enter the string: ");
    gets(str);

    len = strlen(str);

    for(int i= len-1; i>=0; i--){
        printf("%c",str[i]);
    }
    return 0;
}
