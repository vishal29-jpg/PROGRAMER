#include<stdio.h>
int main(){
	float l,w,area,perimeter;
	printf("enter the length of the rectangle");
	scanf("%f",&l);
	printf("enter the width of the rectangle");
	scanf("%f",&w);
	area=l*w;
	perimeter=2*(l+w);
	printf("area of the rectangle,%f\n",area);
	printf("perimeter of the rectangle,%f\n",perimeter);
	return 0;
}
