
#include<stdio.h>

int main()
{
    int *a="Hello";
    int *p=a;
    p=p+2;
    p='4';
    printf("%s",a);
    return 0;
}
