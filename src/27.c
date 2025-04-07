#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(10 * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        free(arr);
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
        // Add more code here as needed
    }
    
    printf("Array elements: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
