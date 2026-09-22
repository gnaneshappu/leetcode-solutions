#include <stdio.h>
#include <string.h>

int isValid(char* s) {
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char current = s[i];

        if (current == '(' || current == '[' || current == '{') {
            stack[++top] = current;
        } else {
            if (top == -1) {
                return 0;
            }

            char opening = stack[top--];

            if ((current == ')' && opening != '(') ||
                (current == ']' && opening != '[') ||
                (current == '}' && opening != '{')) {
                return 0;
            }
        }
    }

    return top == -1;
}

int main() {
    // Test 1: typical case
    printf("%d\n", isValid("()[]{}"));

    // Test 2: edge case - invalid parentheses
    printf("%d\n", isValid("(]"));

    return 0;
}