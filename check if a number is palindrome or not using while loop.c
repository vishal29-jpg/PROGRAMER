#include <stdio.h>

int main() {
    int a, reverse = 0;
    
    
    printf("Enter a number: ");
    scanf("%d", &a);
    
     
    int original = a;
    if (a < 0) {
        printf("Negative numbers cannot be palindromes.\n");
        return 0;
    }
    
    
    int temp = a;
    while (temp > 0) {
        reverse = reverse * 10 + (temp % 10);  
        temp /= 10;  
    }
    
    
    if (original == reverse) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }
    
    return 0;
}

