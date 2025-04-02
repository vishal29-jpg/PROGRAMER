#include<stdio.h>
int main(){
	int i,j,k,n=4;
	for(int i=1;i<=n;i++){
		for(j=n;j>=1;j--)
		if(i>=j)
		{
			printf("*");
		}
		else{
			printf(" ");
		}
	printf("\n");	
	}
	return 0;
}
