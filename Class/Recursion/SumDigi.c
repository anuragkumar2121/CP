#include <stdio.h>
int sum =0;
void printSum(int num){

if(num==0){
    printf("The sum is %d", sum);
    return;
}
int a = num%10;

sum += a;
num = num/10;
printSum(num);

}
int main(int argc, char const *argv[])
{
    printf("Enter the value of number: ");
    int num;
    scanf("%d",&num);
    printSum(num);
    return 0;
}
