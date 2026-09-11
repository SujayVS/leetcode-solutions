#include <stdio.h>
#include <string.h>

void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

// Local testing block
int main() {
    // Test Case 1: Typical string with odd length
    char test1[] = {'h', 'e', 'l', 'l', 'o'};
    int size1 = 5;
    reverseString(test1, size1);
    printf("Test 1 Result: ");
    for (int i = 0; i < size1; i++) {
        printf("%c", test1[i]);
    }
    printf(" (Expected: olleh)\n");

    // Test Case 2: Edge Case (Single element or even length)
    char test2[] = {'A'};
    int size2 = 1;
    reverseString(test2, size2);
    printf("Test 2 Result: ");
    for (int i = 0; i < size2; i++) {
        printf("%c", test2[i]);
    }
    printf(" (Expected: A)\n");

    return 0;
}