#include<stdio.h>
#include<string.h>
#define MAX 1000
int main(int argc, char const *argv[])
{
    char input[MAX],len,count=0;
    int freq[MAX], max,index=0;
    printf("Enter the string: ");
    fgets(input,MAX,stdin);
    len=strlen(input);
    for(int i=0; i<len;i++){
        count=0;
        for(int j=0;j<len;j++){
            if(input[i]==input[j]){
                count++;
            }
        }
        freq[i] = (count);
    }
    max=freq[0];
    for(int i=1; i<len; i++){
        if (freq[i]>max){
            max= freq[i];
            index=i;
        }
    }
    printf("The maximum occuring character is :%c",input[index]);
    return 0;
}
