#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool isValid(char* s) {
    int len = strlen(s);
    if (len % 2 != 0) {
        return false;
    }

    // Allocate stack memory bounded by string length
    char* stack = (char*)malloc(len);
    int top = -1;

    for (int i = 0; i < len; i++) {
        char c = s[i];
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        } else {
            if (top == -1) {
                free(stack);
                return false;
            }
            char open = stack[top--];
            if ((c == ')' && open != '(') ||
                (c == '}' && open != '{') ||
                (c == ']' && open != '[')) {
                free(stack);
                return false;
            }
        }
    }

    bool valid = (top == -1);
    free(stack);
    return valid;
}

// Local testing block
int main() {
    // Test Case 1: Typical balanced parentheses
    char test1[] = "()[]{}";
    printf("Test 1 Result: %s (Expected: true)\n", isValid(test1) ? "true" : "false");

    // Test Case 2: Edge Case (Mismatched bracket order / odd length)
    char test2[] = "([)]";
    printf("Test 2 Result: %s (Expected: false)\n", isValid(test2) ? "true" : "false");

    return 0;
}