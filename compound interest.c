#include<stdio.h>
int main(){
	float p,r,t,ci,amount,n;
	printf("enter the principal amount");
	scanf("%f",&p);
	printf("enter the annual interest rate(in percentage)");
	scanf("%f",&r);
	printf("enter the time(in years)");
	scanf("%f",&t);
	printf("enter the number of times the interst is compounded annually");
	scanf("%f",&n);
	amount=p*pow((1+r/n),n*t);
	ci=amount-p;
	printf("the compound interest ci is:%f",ci);
	return 0;

	
}
