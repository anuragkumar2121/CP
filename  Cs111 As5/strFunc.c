#include <stdio.h>
#include <string.h>
#define Max 100000

int main(int argc, char const *argv[])
{   
    char str[Max],str2[Max],str3[Max];
    
    fgets(str, 100000, stdin);
    printf("1. Find length \n2. Copy a string to other \n3. Compare two string\n");
    int n;
    scanf("%d", &n);
    char c;
    switch (n)
    {
    case 1:
        while((c = getchar()) != '\n' && c != EOF);
        printf("\n%ld\n", strlen(str)-1);
        break;
    case 2:
        strcpy(str2,str);
        break;
    case 3:
        while((c = getchar()) != '\n' && c != EOF);
        fgets(str3, Max, stdin);
        
        if(strcmp(str3,str)==0){
            printf("Same");
        }else{
            printf("Different");
        }
    default:
        break;
    }
    return 0;
}
