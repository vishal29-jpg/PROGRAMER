#include<stdio.h>
int main()
{
	float principal,rate,time,simpleinterest;
	printf("enter the principal amount");
	scanf("%f",&principal);
	printf("enter the annual interest rate");
	scanf("%f",&rate);
	printf("enter the time(in years)");
	scanf("%f",&time);
	simpleinterest=(principal*rate*time)/100;
	printf("the simpleinterest is:%f\n",simpleinterest);
	return 0;
	
}
