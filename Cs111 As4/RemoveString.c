#include<stdio.h>
#include<string.h>

int main()
{
    int i, j = 0, k = 0,n = 0;
    int indicator = 0;
 
    char str[100], neww[100], word[100];

    printf("Enter Any String: ");
    gets(str);

    printf("\n Enter SubString You Want to be Removed: ");
    gets(word);

    for(i = 0 ; str[i] != '\0' ; i++)
    {
        k = i;
     
        while(str[i] == word[j])
        {
            i++,j++;
            if(j == strlen(word))
            {
                indicator = 1;
                break;
            }
        }
    j = 0;

    if(indicator == 0)
        i = k;      
    else
        indicator = 0;

    neww[n++] = str[i];
    }

    neww[n] = '\0';
    
    printf("\n After Removing String is : %s\n",neww);
}