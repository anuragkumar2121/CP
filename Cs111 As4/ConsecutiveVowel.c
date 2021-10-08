#include <stdio.h>
#include <string.h>


int isVowel(char ch)
{
    ch = toupper(ch);
    if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
        return 1;
    else
        return 0;
}


int main()
{
    char str[100];
    printf("Enter string : ");
    gets(str);
    int i, consecutiveVowel = 0;
    int strlength = strlen ( str);
    for (i = 0; i < strlength - 1; i++)
    {
        if(i==0){
                 if (isVowel(str[i]))
        {
            if (isVowel(str[i + 1] ))
            {
                consecutiveVowel++;
            }
        }   
        }else{
            if (isVowel(str[i]))
        {
            if (isVowel(str[i + 1] && !isVowel(str[i-1])))
            {
                consecutiveVowel++;
            }
        }      
        }

    }
    printf("Total Consecutive Vowel = %d\n", consecutiveVowel);
    return 0;
}