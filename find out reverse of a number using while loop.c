#include <stdio.h>

int main() {
    int a, reverse = 0;
    
    
    printf("Enter a number: ");
    scanf("%d", &a);
    
   
    int original = a;
    if (a < 0) {
        a = -a;
    }
    
    
    while (a > 0) {
        reverse = reverse * 10 + (a % 10);  
        a /= 10;  
    }
    
    if (original < 0) {
        reverse = -reverse;
    }
    
   
    printf("Reversed number: %d\n", reverse);
    
    return 0;
}

