#include <stdio.h>
#include <math.h>

int main() {
    int a, original, remainder, result = 0, n = 0;
    
    
    printf("Enter a number: ");
    scanf("%d", &a);
    
    original = a;
    
    
    int temp = a;
    while (temp != 0) {
        temp /= 10;
        n++;
    }
    
    
    temp = a;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }
    
    
    if (result == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }
    
    return 0;
}

