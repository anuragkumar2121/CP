// In onlineGDB CHECK IT
#include<stdio.h>
#include<math.h>
int main()
{
    int n1,n2;
    scanf("%d %d",&n1 , &n2);
    int GCD=1,LCM=1;
    for(int i=1; i<=fmax(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            GCD =i ;
        }
    }
    int T=fmax(n1,n2);
    while(1){
        if(T%n1==0 && T%n2==0){
            LCM =T ;
            break;
        } 
        T++;
    }
    printf("GCD is %d and LCM is %d",GCD, LCM);
}