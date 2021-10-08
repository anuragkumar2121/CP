#include<stdio.h>
int main()
{
    int rollNo;
    double PhyMark,ChemMark,MathMark;
    printf("Enter the roll no.  ");
    scanf("%d",&rollNo);
    printf("\nEnter Physics Marks  ");
    scanf("%lf",&PhyMark);
    printf("\nEnter Chemistry Marks  ");
    scanf("%lf",&ChemMark);
    printf("\nEnter Math Marks");
    scanf("%lf",&MathMark);

    printf("\nTotal marks are %f\n",PhyMark+ChemMark+MathMark);
    printf("Average marks are %f",(PhyMark+ChemMark+MathMark)/3);
    
    return 0;
}
