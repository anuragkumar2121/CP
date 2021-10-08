#include <stdio.h>

int arr(int[], int, int);

int main()
{

    int size, biggest, i;

    printf("Enter size of the array:");
    scanf("%d", &size);

    int list[size];

    for (i = 0; i < size; i++)
    {
        scanf("%d", &list[i]);
    }

    if (size == 0)
    {
        printf("Empty list\n");
    }

    else
    {
        biggest = list[0];
        biggest = arr(list, size - 1, biggest);
        printf("\nThe biggest number in array is: %d\n", biggest);
    }
}

int arr(int list[], int position, int biggest)
{

    if (position == 0)
        return biggest;

    if (position > 0)
    {
        if (list[position] > biggest)
        {
            biggest = list[position];
        }
        return arr(list, position - 1, biggest);
    }
}