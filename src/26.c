#include <stdio.h>

int main() {
    int i;
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("* ");
        } else {
            printf("# ");
        }
    }

    printf("\n");

    return 0;
}
