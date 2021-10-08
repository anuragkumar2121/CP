// Factorial finding 3! = 3*2*1 or 3*2!
// So we have to do it by recurssion


#include <stdio.h>
int factorial (int N){
    int resultant;
    if(N==1 || N==0){
        return 1;
    }else{
    resultant= (N)*factorial(N-1);
    return resultant;}
}
int main()
{   int A;
    printf("Enter the number of which you want factorial of: ");

    scanf("%d",&A);

    int Ans = factorial(A);

    printf("\n The result is: %d",Ans);
    return 0;
}
