#include<stdio.h>
#include<string.h>
int main()
{
int x,y,ans;
char st1[10000],st2[10000];
printf("Enter the value of string 1-"); 
scanf("%s",st1);
printf("Enter the value of string2-");
scanf("%s",st2);
x=strlen(st1);  
y=strlen(st2);
ans=x+y;
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        if(st1[i]==st2[j]){
            ans -= 2;
            st1[i]='0';
            st2[j]='0';
            break;
            
        }
    }
}printf("%d",ans);
}