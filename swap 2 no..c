#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter the first number");
	scanf("%d",&a);
	printf("enter the second number");
	scanf("%d",&b);
	printf("before swapping:a=%d,b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("after swapping:a=%d,b=%d\n",a,b);
	return 0;
}
