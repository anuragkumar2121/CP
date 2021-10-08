#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Stock{
    int qty,itemNo;
    float price;
    char itemName[25];
}Stock;

int main()
{
    int n;
    printf("Enter no of items:");
    scanf("%d",&n);
    Stock s[n];
    printf("Enter details(name,itemNo,price,qty)\n");
    for(int i = 0;i<n;i++)
    {
        fflush(stdin);
        scanf("%[^\n]s",s[i].itemName);
        scanf("%d %f %d",&s[i].itemNo,&s[i].price,&s[i].qty);
    }
    printf("PRICE > 129\n");
    for(int i = 0;i<n;i++)
    {
        if(s[i].price > 129)
        {
            printf("ItemNo:%d\nItemName:%s\nPrice:%0.2f\nQuantity:%d\n",s[i].itemNo,s[i].itemName,s[i].price,s[i].qty);
        }
    }
    printf("\n\n\n");

    printf("QTY < 5\n");
    for(int i = 0;i<n;i++)
    {
        if(s[i].qty < 5)
        {
            printf("ItemNo:%d\nItemName:%s\nPrice:%0.2f\nQuantity:%d\n",s[i].itemNo,s[i].itemName,s[i].price,s[i].qty);
        }
    }
    return 0;
}