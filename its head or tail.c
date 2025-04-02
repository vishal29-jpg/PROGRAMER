#include<stdio.h>
int main(){
	int toss;
	printf("enter the toss result(0 for tail,1 for head):");
	scanf("%d",&toss);
	if(toss==1){
		printf("it's a head!");
	}
	
	if(toss==0){
		printf("it's a tail");
	}
	return 0;
}
