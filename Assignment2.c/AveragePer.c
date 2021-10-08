#include <stdio.h>
int main()
{   int input;
    float per,sum;
     
    for (int i=1;i<=4;i++){
    printf("Tell marks in subject %d- ",i);
    scanf("%d",&input);
    sum+=input;
    }
    per=sum/4;
    
    if(per>=85){
        printf("Grade = A");
    }else{
        if(per>=70 && per <85){
            printf("Grade = B");
        }else{
            if(per>=55 && per<70){
                printf("Grade = C");
            }else{
                if(per>=40 && per <55){
                    printf("Grade = D");
                }if (per<40){
                    printf("Grade =E");
                }
            }
        }
    }
    return 0;
}