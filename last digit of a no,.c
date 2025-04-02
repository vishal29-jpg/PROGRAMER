#include<stdio.h>
int main(){
	int a,lastdigit;
	printf("enter the number:");
	scanf("%d",&a);
	lastdigit=a%10;
	printf("the lastdigit of%dis%d\n",a,lastdigit);
	return 0;
}
