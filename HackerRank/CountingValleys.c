//https://www.hackerrank.com/challenges/counting-valleys/problem?h_r=profile
#include<stdio.h>
int main(int argc, char const *argv[])
{
   int n,count=0,valley=0;
   printf("Enter the number of steps: ");
   scanf("%d",&n);
   char step[n];
   fflush(stdin);
   fgets(step,n+1,stdin);
   puts(step);
   for(int i=0;i<n;i++){
       if(step[i]=='U'){
           count+=1;
       }else{
           count--;
       }
    if(count==-1){
        if(step[i]=='D'){
            valley++;
        }
    }
    
   }printf("Valley is %d",valley);


    return 0;
}
