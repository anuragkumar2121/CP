#include<stdio.h>
int main()
{
    int T,count=0;
    scanf("%d",&T);
    int arr[T];
    for(int i=0; i<T; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<T; i++){

    int revNum=0,digit,num;

    num = arr[i];
    if (num<0){
        num= -1*num;
    }
    int test=num;
    while(num>0){
                digit=num%10;
        revNum= digit + 10*revNum;
        num/=10;
    }
    if(revNum==test){
        count++;
        printf("%d is palindrome\n",arr[i]);
    }   
    }
    printf("The number of palindromes are %d\n", count);

    return 0;
}