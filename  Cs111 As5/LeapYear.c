#include <stdio.h>
int leapCheck(int input)
{
    if (input <= 0)
    {
        printf("Invalid Input");
        return 0;
    }

    if (input % 100 == 0)
    {
        if (input % 400 == 0)
        {
            printf("It is a leap year");
        }
        else
        {
            printf("It is not a leap year");
        }
    }
    else
    {
        if (input % 4 == 0)
        {
            printf("It is a leap year");
        }
        else
        {
            printf("It is not a leap year");
        }
    }
    return 0;
}
int main()
{
    int input;
    printf("Please give a input- ");
    scanf("%d", &input);
    leapCheck(input);
    return 0;
}