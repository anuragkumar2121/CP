#include <stdio.h>
#include <string.h>

char* reverse(char str[], int i){
    int n = strlen(str);
    if(i == n/2){
        return str;
    }
    
    char temp = str[i];
    str[i] = str[n-i-1];
    str[n-i-1] = temp;
    reverse(str,i+1);
}

int main(int argc, char const *argv[])
{
    char str[] = "ABCDE";
    char* rev = reverse(str,0);
    for(int i=0; i<strlen(rev) ; i++){
        printf("%c",*(rev+i));
    }
    printf("\n");
    return 0;
}
