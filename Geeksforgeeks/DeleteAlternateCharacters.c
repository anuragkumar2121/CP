#include <stdio.h>
#include <string.h>
    int StringLength(char s[]) {
    int i;
    for (i = 0; s[i] != '\0'; ++i);
    return i;
    }
    
    int main()
{
    char* str;
    scanf("%s",&str);
    int l=(int)StringLength(str);
    printf("%d",l);
    
}




