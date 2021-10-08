#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter a, b and c of ax^2 + bx + c: ");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);


    discriminant = b * b - 4 * a * c;

    if (discriminant >= 0 ) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %f and root2 = %f", root1, root2);
    }

    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %f+%fi and root2 = %f-%fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
} 

