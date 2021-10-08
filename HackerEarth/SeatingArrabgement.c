#include<stdio.h>
int main()
{
    int T,a,b,S,OppSeat;
    printf("Enter the vlaue of test cases-");
    scanf("%d",&T);
    while(T!=0){
        printf("Enter the seat number-");
        scanf("%d",&S);
        a=S%6;
        b=S/6;
        if(a!=0){       //That S is not multiple of 6
            if(b%2!=0){ //That is b is odd
                switch(a){
                    case 1:
                    OppSeat=S-1;
                    break;
                    case 2:
                    OppSeat=S-3;
                    break;
                    case 3:
                    OppSeat=S-5;
                    break;
                    case 4:
                    OppSeat=S-7;
                    break;
                    case 5:
                    OppSeat=S-9;
            }}else{
                switch(a){
                    case 1:
                    OppSeat=S+11;
                    break;
                    case 2:
                    OppSeat=S+9;
                    break;
                    case 3:
                    OppSeat=S+7;
                    break;
                    case 4:
                    OppSeat=S+5;
                    break;
                    case 5:
                    OppSeat=S+3;  
                            }
                    }
                
            }else{                          //S%6==0
                if(b%2==1){                    //Number is odd
                    OppSeat=S+1;
                }else{
                    OppSeat=S-11;
                }
            }
        T--;
        printf("%d",OppSeat);
        if(S%6==1 || S%6==0){
            printf(" WS\n");
        }
        if(S%6==2 || S%6==5){
            printf(" MS\n");
        }
        if(S%6==3 || S%6==4){
            printf(" AS\n");
            
        }
    }
    return 0;
}
