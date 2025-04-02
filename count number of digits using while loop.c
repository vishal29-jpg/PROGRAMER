#include <stdio.h>

int main() {
    int a, count = 0;
    
    
    printf("Enter a number: ");
    scanf("%d", &a);
    
   
    if (a < 0) {
        a = -a;
    }
    
    
    if (a == 0) {
        count = 1;
    } else {
        
        while (a> 0) {
            a/= 10;  
            count++;
        }
    }
    
    
    printf("Number of digits: %d\n", count);
    
    return 0;
}

