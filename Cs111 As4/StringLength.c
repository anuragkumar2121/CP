#include <stdio.h>
 
void main()
{
    char str[500];
    int i, length = 0;
 
    printf("Enter a string \n");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    printf("So, the length of %s = %d\n", str, length);
}