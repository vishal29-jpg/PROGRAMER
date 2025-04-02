#include<stdio.h>
int main(){
	int i , a=0,b=1,n,s=0;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a);
		s=a+b;
		a=b;
		b=s;
	}
	return 0;
}
