#include<stdio.h>
int factorial(int input){
	int facto=1;
for(int i=0;i<input;i++){
	facto=facto*(input-i);
}
return(facto);
}
void main(){
	int sum=1,input,n;
	printf("Enter upto which digit you want series sum: ");
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		sum += factorial(i);
		}
	printf("The sum is %d",sum);
}