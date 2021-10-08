#include <stdio.h>
int main(int argc, char const *argv[])
{
    int r1,r2,c1,c2;

    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
    int arr1[r1][c1],arr2[r2][c2];

    	if(r1!=r2 || c1!=c2)
	{
		printf("Matrix Addition is not possible");
		return -1;
	}
	else if(c1!=r2)
	{
		printf("Matrix Multiplication is not possible");
		return -1;
	}

    printf("Enter elements of 1st matrix");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
        
    }
    
    printf("Enter element of 2nd element");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
        
    }

    // Addition
    printf("\n Addition \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }

    int d[r1][c2];

    printf("\nMultiplication\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<r2;k++){
                 d[i][j] += arr2[i][k]*arr1[k][j];
            }
                printf("%d ",d[i][j]);
            } 
            printf("\n");   
    }
			

    

    return 0;
}
