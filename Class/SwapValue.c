#include <stdio.h>
int main() {
    double a, b;
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);

    // Swapping

    // a = (initial_a - initial_b)
    a = b - a;   
 
    // b = (initial_a - initial_b) + initial_b = initial_a
    b = b - a;

    // a = initial_a - (initial_a - initial_b) = initial_b
    a = a + b;

    printf("After swapping, a = %.2lf\n", a);
    printf("After swapping, b = %.2lf", b);
    return 0;
}