#include<stdio.h>
int main(){
	int i,n,f;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{f=n*i;
	printf("factorial is:%d\n",f);
	}
	return 0;
}
