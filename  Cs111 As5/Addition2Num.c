#include<stdio.h>


int sum(int num1, int num2) {
   int num3;
   num3 = num1 + num2;
   return (num3);
}

int main() {
   int num1, num2, sum1;
 
   printf("\nEnter the two numbers : ");
   scanf("%d %d", &num1, &num2);

   sum1 = sum(num1, num2);
 
   printf("\nAddition of two number is : %d",sum1);
   return 0;
}
 
