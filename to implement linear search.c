#include <stdio.h>

int main() {
    int n, key, found = 0;
    
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    
    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element %d found at index %d\n", key, i);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }
    
    return 0;
}

