#include<stdio.h>
int main()
{
    int i=0,input,sum ;
    sum:
    i++;
    printf("Enter the value %d - ",i);
    scanf("%d",&input);
    if (input<0){
        printf("Enter a valid non negative number");
        i--;
    }
    if(input>=0);
    sum+=input;
    
    if(i<=10){
       goto sum;
}float avg =(float)sum/10;
printf("The Sum is %d and the Average is %f",sum,avg);
    
    return 0;
}
