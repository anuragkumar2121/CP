//www.hackerrank.com/challenges/designer-pdf-viewer/problem?h_r=profile
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int h[26],len;
    for(int i=0;i<26;i++){
        scanf("%d",&h[i]);
    }
    char str[10];
    fflush(stdin);

    scanf("%s",str);
    len=strlen(str);
    
    int hei[len];
    for(int i=0;i<len;i++){
        hei[i]=h[str[i]-97];
 
    }
    int Max;
    Max = hei[0];
    for(int i=0;i<len;i++){
        if(hei[i]>Max){
            Max=hei[i];
        }
        
    }printf("%d",len*Max);

    return 0;
}
