#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        char* empty = (char*)malloc(1);
        empty[0] = '\0';
        return empty;
    }

    // Allocate memory matching at most the length of the first string
    int len = strlen(strs[0]);
    char* prefix = (char*)malloc(len + 1);
    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (prefix[j] != '\0' && strs[i][j] != '\0' && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix[j] = '\0'; // Truncate to the matched length
        if (prefix[0] == '\0') {
            break;
        }
    }

    return prefix;
}

// Local testing block
int main() {
    // Test Case 1: Typical prefix match
    char* test1[] = {"flower", "flow", "flight"};
    char* res1 = longestCommonPrefix(test1, 3);
    printf("Test 1 Result: \"%s\" (Expected: \"fl\")\n", res1);
    free(res1);

    // Test Case 2: Edge Case (No common prefix)
    char* test2[] = {"dog", "racecar", "car"};
    char* res2 = longestCommonPrefix(test2, 3);
    printf("Test 2 Result: \"%s\" (Expected: \"\")\n", res2);
    free(res2);

    return 0;
}