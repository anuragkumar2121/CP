#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int Height=1,T,Num;
    scanf("%d",&T);
    while (T!=0)
    {
        scanf("%d",&Num);
        Height=1;
        for(int i=1;i<=Num;i++){
            if(i%2==1){
                Height *= 2;
            }else{
                Height += 1;
        }
        }
        fflush(stdin);
        printf("%d",Height);
        T--;
        
    }
    
    return 0;
}
