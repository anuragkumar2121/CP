#include <stdio.h>
int main(int argc, char const *argv[])
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a>=b+c || b>= a+c || c>= a+b){
        printf("No triangle possible\n");
        return 0;
    }

    if(a*a == b*b + c*c || b*b== a*a+ c*c || c*c == a*a + b*b){
        printf("Right angled triangle\n");
    }else if(a*a > b*b + c*c || b*b > a*a+ c*c || c*c > a*a + b*b ){
        printf("Obtused angled triangle\n");
    }else if(a*a < b*b + c*c || b*b < a*a+ c*c || c*c < a*a + b*b){
        printf("Acute angled triangle\n");
    }

    if(a==b && b==c){
        printf("Equilateral triangle\n");
    }else if(a==b || b==c || a==c){
        printf("Isosceles triangle\n");
    }else {
        printf("Scalene triangle\n");
    }

    return 0;
}
