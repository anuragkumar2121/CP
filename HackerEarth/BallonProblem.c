#include<stdio.h>
#include<stdbool.h>
int main()
{
    
    int T,PriceP,PriceG,NoOfPart,SumQ1,SumQ2,TotalPrice1,TotalPrice2;
    int Q1,Q2;
    printf("Enter the value of T ");
    scanf("%d",&T);    
    

    for(int j=1;j<=T;j++){    
    printf("Enter price of green and purple.");
    scanf("%d\n%d",&PriceG,&PriceP);
    SumQ1=0;
    SumQ2=0;
    printf("Enter the number of participants.");
    scanf("%d",&NoOfPart);

    for(int i=1;i<=NoOfPart;i++)
    {
        printf("Enter Value for Q1 and Q2 ");
        scanf("%d\n%d",&Q1,&Q2);
        if(Q1==1)
        {
            SumQ1++;
        }
        if(Q2==1)
        {
            SumQ2++;
        }
        
    }
 

    TotalPrice1=(SumQ2*PriceP+SumQ1*PriceG);
    TotalPrice2=(SumQ2*PriceG+SumQ1*PriceP);

    if (TotalPrice1>TotalPrice2){
        printf("%d",TotalPrice2);
    }
    else{
        printf("%d",TotalPrice1);
    }
    }
    return 0;
}
