#include <stdio.h>
#define MAX 5

// I have taken MAX as 10, you can change array size by changing max from line number 2

double arr[MAX];


void ANUenterelements209(){
    for(int i=0; i< MAX; i++){
        printf("Enter the element %d -", i+1);
        scanf("%lf",&arr[i]);
    }
}
void ANUarrange209();

void ANUarrange209(){
    for(int i=0;i<=MAX/2;i++){
        double temp = arr[i];
        arr[i] = arr[MAX-i];
        arr[MAX-i] = temp;
    }

    for (int i = 0; i < MAX; i++)
    {
        if(i%2==1){
            printf("%lf  ",arr[i]);
        }
    }
    
}
int main(int argc, char const *argv[])
{
    ANUenterelements209();
    ANUarrange209();

}
