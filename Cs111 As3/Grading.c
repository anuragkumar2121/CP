#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("Wrong Entry");
    }
    else if(marks<40)
    {
        printf("Fail");
    }
    else if(marks>=40 && marks<50)
    {
        printf("Grade E\n");
    }
    else if(marks>=50 && marks<60)
    {
        printf("Grade D\n");
    }
    else if(marks>=60 && marks<70)
    {
        printf("Grade C\n");
    }
    else if(marks>=80 && marks<90)
    {
        printf("Grade B\n");
    }
    else
    {
        printf("Grade A\n");
    }
}