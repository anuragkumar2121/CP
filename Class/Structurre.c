#include<stdio.h>
int main(){
    struct book {
        char Title[20];
        int Edition;
        float Price;
    }b1,b2,b3,b[10];
    struct book b3={"Hello",3,190};
    struct book b[10];

    b3.Edition=5;

    b[1].Title = b3.Title;              //*****************

    scanf("%c",&b1.Title);
}