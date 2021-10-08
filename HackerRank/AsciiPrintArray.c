#include<stdio.h>

void Ascii(char ch){
    printf("The Ascii is %d",ch);
}
void Hello(){
    printf("Hello");
}
int main()
{
    char arr[100];
    int Num;
    printf("Enter the character array: ");
    scanf("%s",arr);
    printf("Enter the position of character of which you want ASCII:");
    scanf("%d",&Num);

    Ascii(arr[Num-1]);
    return 0;
}
