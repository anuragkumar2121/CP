#include <string.h>
#include <stdio.h>
 
int main()
{
    char s[1000];  
    int i,n,c=0;
 
    printf("Enter  the string : ");
    gets(s);
    n=strlen(s);
    char s2[n];

    printf("Value of n is %d\n",n);

    for (int i = 0; i<n ; i++)
    {
        s2[n-1-i]=s[i];
    }
    printf("The reverse is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%c",s2[i]);
    }
    printf("\n");
    
 
    for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	c++;
 
 	}
 	if(c==i)
 	    printf("string is palindrome\n");
    else
        printf("string is not palindrome\n");

     
    return 0;
}