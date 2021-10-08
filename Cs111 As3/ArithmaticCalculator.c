#include <stdio.h>
void main() {
  double num1,num2;
  int opt;
  printf("Enter the first Integer :");
  scanf("%lf",&num1);
  printf("Enter the second Integer :");
  scanf("%lf",&num2);
  
    printf("\nEnter option :\n");
    printf("1-Addition.\t2-Substraction.\t3-Multiplication.\t4-Division.\t5-Exit.\n");
    scanf("%d",&opt);
    switch(opt) {
      case 1:
        printf("The Addition of  %f and %f is: %f\n",num1,num2,num1+num2);
        break;
        
      case 2:
        printf("The Substraction of %f  and %f is: %f\n",num1,num2,num1-num2);
        break;
        
      case 3:
        printf("The Multiplication of %f  and %f is: %f\n",num1,num2,num1*num2);
        break;  
      
      case 4:
        if(num2==0) {
          printf("The second integer is zero. Devide by zero.\n");
        } else {
          printf("The Division of %f  and %f is : %f\n",num1,num2,num1/num2);
        }  
        break;
        
      case 5: 
        break; 
        
      default:
        printf("Wrong Entry\n");
        break; 
    }
}