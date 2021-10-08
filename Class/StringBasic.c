#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char a[100]={'A','n','u','r','a','g','\0'},b[100]={'P','r','o','g','r','a','m','\0'},c[100],d[100];
    gets(c);
    printf("%s\n",c);
    strcpy(d,c);
    
    strcat(c,(a= strncat(a," ");));
    printf("%s",c);
    return 0;
}

