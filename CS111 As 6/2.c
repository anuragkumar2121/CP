#include <stdio.h>
#include <string.h>
void linkfloat();
int main(int argc, char const *argv[])
{
    struct people
    {
        char name[30];
        char address[100];
        double telephoneNumber;
    };
    struct people p[5];
    int dh;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter name, address, phone : ");
        scanf("%s %s %lf", p[i].name, p[i].address, &p[i].telephoneNumber);
        while((dh = getchar()) != '\n');
    }
    printf("Put 1 to search by name and 2 to search by telephone number: ");
    int a;
    scanf("%d", &a);
    char str[30];
    double dou;
    switch (a)
    {
    case 1:
        
        scanf("%s",str);
        for (int i = 0; i < 5; i++)
        {
            if(strcmp(str,p[i].name)==0){
                printf("%s %s %.0f \n",p[i].name, p[i].address, p[i].telephoneNumber);
            }
        }
        
        break;
    
    case 2:
        scanf("%lf",&dou);
        for (int i = 0; i < 5; i++)
        {
            if(dou==p[i].telephoneNumber){
                printf("%s %s %.0f \n",p[i].name, p[i].address, p[i].telephoneNumber);
                }
        }
            
        break;

    default:
        printf("Invalid Input");
        break;
    }
    
    return 0;
}
