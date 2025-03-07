// Example C code for a simple calculator program
#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    float result;

    printf("Enter two numbers: ");
    scanf("%d %c", &num1, &op);
    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        result = num1 / num2;
    } else {
        printf("Invalid operator\n");
        return 0;
    }

    printf("Result: %f\n", result);

    return 0;
}
