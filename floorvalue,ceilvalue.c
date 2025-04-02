#include<stdio.h>
int main(){
	float a,floorvalue,ceilvalue;
	printf("enter the number");
	scanf("%f",&a);
	floorvalue=floor(a);
	ceilvalue=ceil(a);
	printf("floorvalue of %f is %f \n",a,floorvalue);
	printf("ceilvalue of %f\n",a,ceilvalue);
	return 0;
}
