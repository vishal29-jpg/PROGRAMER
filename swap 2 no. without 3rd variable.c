#include <stdio.h>
int main(){
	int a,b,c;
	printf("enter the first number");
	scanf("%d",&a);
	printf("enter the second number");
	scanf("%d",&b);
	printf("before swapping:a=%d,b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping:a=%d,b=%d\n",a,b);
	return 0;
}
