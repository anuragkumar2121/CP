#include <stdio.h>
void largest(float n1, float n2, float n3){
    if (n1 >= n2 && n1 >= n3){
        printf("%f is the largest number.", n1);}


    if (n2 >= n1 && n2 >= n3){
        printf("%f is the largest number.", n2);}


    if (n3 >= n1 && n3 >= n2){
        printf("%f is the largest number.", n3);}
}
int main() {
    float a,b,c;
    printf("Enter three different numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    largest(a,b,c);
    return 0;
    }




    