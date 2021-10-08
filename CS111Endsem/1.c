#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int Anuinput209,Anuin209,Anunum209=0;
    scanf("%d",&Anuinput209);
    Anuin209 = Anuinput209;


    while(Anuinput209!=0){
        int Anuremain209 = Anuinput209%10;
        Anuinput209 /= 10;
        Anunum209 = Anunum209*10 + Anuremain209;

    }
    printf("%d\n",Anunum209);
    printf("%d\n",Anunum209-Anuin209);
    
    return 0;
}
