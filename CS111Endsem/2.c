#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    char Anuinput209[1000];
    scanf("%s",Anuinput209);
    int Anulen209 = strlen(Anuinput209);

    for(int i=0; i< Anulen209/2; i++){
        char Anutemp209 = Anuinput209[i];
        Anuinput209[i] = Anuinput209[Anulen209-1-i];

        Anuinput209[Anulen209-1-i] = Anutemp209;
    }
    for (int i = 0; i < Anulen209; i++)
    {
        Anuinput209[i] += 3;
        if(Anuinput209[i] >90 ){
            Anuinput209[i] -= 26 ;
        }
    }

    printf("%s",Anuinput209);
    
    return 0;
}
