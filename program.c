#include<stdio.h>
int main(){
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if(n>5){
		printf("the number is greater than 5");
	}
	if(n==5){
		printf("the number is equal to 5");
	}
	else{
		printf("the number is not greater than 5");
	}
	return 0;
}
