#include <stdio.h>
#include <stdlib.h>
void addDistace();


struct Distance {
   int feet;
   float inch;
} d1, d2, r1;

struct complexN
{
    double real;
    double imaginary;
}c1, c2, r2;

struct Time
{
   int seconds;
   int minutes;
   int hours;
}t1, t2;


void timeDifference (struct Time, struct Time);
void addComplex (struct complexN, struct complexN);

int main(int argc, char const *argv[])
{

printf("Enter 1 to add distance 2 for adding complex and 3 for distance between time periods- ");
int a;
scanf("%d",&a);

switch (a)
{
case 1:
    addDistace();
    break;
case 2:
    scanf("%lf %lf", &c1.real, &c1.imaginary);
    scanf("%lf %lf", &c2.real, &c2.imaginary);
    addComplex(c1,c2);
    break;

case 3:
    printf("Enter hours minutes and seconds 1st input");
    scanf("%d %d %d", &t1.hours, & t1.minutes, &t1.seconds);
    printf("Enter hours minutes and seconds 2nd input");
    scanf("%d %d %d", &t2.hours, & t2.minutes, &t2.seconds);
    timeDifference(t1,t2);
    break;
default:
    printf("invalid input");
    break;
}
    return 0;
}

void addDistace(){
   printf("Enter feet: ");
   scanf("%d", &d1.feet);
   printf("Enter inch: ");
   scanf("%f", &d1.inch);
 
   printf("Enter feet: ");
   scanf("%d", &d2.feet);
   printf("Enter inch: ");
   scanf("%f", &d2.inch);
   
   r1.feet = d1.feet + d2.feet;
   r1.inch = d1.inch + d2.inch;

   while (r1.inch >= 12.0) {
      r1.inch = r1.inch - 12.0;
      ++r1.feet;
   }
   printf("Sum is = %d feet and %.1f inch", r1.feet, r1.inch);
}

void addComplex(struct complexN c1, struct complexN c2){
    float sumR, sumI;
    sumR = c1.real + c2.real;
    sumI = c1.imaginary + c2.imaginary;

    printf("SUM = %0.2f + i %0.2f", sumR, sumI);
}

void timeDifference (struct Time t1, struct Time t2){
    int t1Total = t1.hours*3600 + t1.minutes*60 + t1.seconds;
    int t2Total = t2.hours*3600 + t2.minutes*60 + t2.seconds;

    int diff = abs(t1Total-t2Total);

    int hours = diff/3600;
    diff = diff%3600;
    int minutes = diff/60;
    diff = diff%60;
    int sec = diff;

    printf("Hours- %d Minutes- %d  Seconds- %d ",hours,minutes,sec);

}


