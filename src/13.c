#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to generate a random integer between 1 and 10
int getRandomInt() {
    int min = 1, max = 10;
    return rand() % (max - min + 1) + min;
}

// Function to generate a random string of length 5
char* getRandomString(void) {
    char str[6];
    for (int i = 0; i < 5; i++) {
        str[i] = 'a' + rand() % 26;
    }
    return str;
}

// Main function to generate a random c code
void generateCode(void) {
    int choice = getRandomInt();
    if (choice == 1) {
        printf("int main() {\n");
        for (int i = 0; i < 5; i++) {
            char* str = getRandomString();
            printf("\tprintf(\"%s\");\n", str);
        }
        printf("return 0;\n}\n");
    } else if (choice == 2) {
        printf("int main() {\n");
        for (int i = 0; i < 5; i++) {
            int num = getRandomInt();
            printf("\tprintf(\"%%d\", %d);\n", num);
        }
        printf("return 0;\n}\n");
    } else if (choice == 3) {
        printf("int main() {\n");
        for (int i = 0; i < 5; i++) {
            char* str = getRandomString();
            int len = strlen(str);
            printf("\tprintf(\"%%s\", %s);\n", str);
        }
        printf("return 0;\n}\n");
    } else if (choice == 4) {
        printf("int main() {\n");
        for (int i = 0; i < 5; i++) {
            int num1 = getRandomInt();
            int num2 = getRandomInt();
            printf("\tprintf(\"%%d %%d\", %d, %d);\n", num1, num2);
        }
        printf("return 0;\n}\n");
    } else if (choice == 5) {
        printf("int main() {\n");
        for (int i = 0; i < 5; i++) {
            int num1 = getRandomInt();
            char* str = getRandomString();
            printf("\tprintf(\"%%d %%s\", %d, %s);\n", num1, str);
        }
        printf("return 0;\n}\n");
    } else if (choice == 6) {
        printf("int main() {\n");
        for (int i = 0; i < 5; i++) {
            int num1 = getRandomInt();
            char* str = getRandomString();
            printf("\tprintf(\"%%s %%d\", %s, %d);\n", str, num1);
        }
        printf("return 0;\n}\n");
    } else if (choice == 7) {
        printf("int main() {\n");
        for (int i = 0; i < 5; i++) {
            int num1 = getRandomInt();
            char* str = getRandomString();
            int len = strlen(str);
            printf("\tprintf(\"%%s %%d\", %s, %d);\n", str, num1);
        }
        printf("return 0;\n}\n");
    } else if (choice == 8) {
        printf("int main() {\n");
        for (int i = 0; i < 5; i++) {
            char* str1 = getRandomString();
            char* str2 = getRandomString();
            int len1 = strlen(str1);
            int len2 = strlen(str2);
            printf("\tprintf(\"%%s %%s\", %s, %s);\n", str1, str2);
        }
        printf("return 0;\n}\n");
    } else if (choice == 9) {
        printf("int main() {\n");
        for (int i = 0; i < 5; i++) {
            char* str1 = getRandomString();
            char* str2 = getRandomString();
            int len1 = strlen(str1);
            int len2 = strlen(str2);
            printf("\tprintf(\"%%s %%s\", %s, %s);\n", str1, str2);
        }
        printf("return 0;\n}\n");
    } else if (choice == 10) {
        printf("int main() {\n");
        for (int i = 0; i < 5; i++) {
            int num1 = getRandomInt();
            char* str = getRandomString();
            int len = strlen(str);
            printf("\tprintf(\"%%d %%s\", %d, %s);\n", num1, str);
        }
        printf("return 0;\n}\n");
    } else {
        printf("int main() {\n");
        for (int i = 0; i < 5; i++) {
            int num1 = getRandomInt();
            char* str = getRandomString();
            int len = strlen(str);
            printf("\tprintf(\"%%s %%d\", %s, %d);\n", str, num1);
        }
        printf("return 0;\n}\n");
    }
}
