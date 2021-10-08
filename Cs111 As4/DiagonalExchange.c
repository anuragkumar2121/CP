#include <stdio.h>
#define N 3

int main()
{
    int array[N][N] = { 4, 5, 6,
                        1, 2, 3,
                        7, 8, 9};


    for (int i = 0; i < N; ++i)
    if (i != N / 2){
        int temp = array[i][i];
        array[i][i]= array[i][N - i - 1];
        array[i][N - i - 1]= temp;
    }
    
 
    for (int i = 0; i < N; ++i)
    {
    for (int j = 0; j < N; ++j)
            printf(" %d", array[i][j]);
    printf("\n");
    }

    return 0;
}