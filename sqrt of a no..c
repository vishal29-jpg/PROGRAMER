#include <stdio.h>
#include <math.h>

int main() {
    double number, result;
    printf("Enter a number: ");
    scanf("%lf", &number);
    result = sqrt(number);
	  printf("The square root of %.2lf is %.2lf\n", number, result);
      return 0;
}


