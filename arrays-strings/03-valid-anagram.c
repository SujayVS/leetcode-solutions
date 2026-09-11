#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    int len_s = strlen(s);
    int len_t = strlen(t);

    // If lengths differ, they cannot be anagrams
    if (len_s != len_t) {
        return false;
    }

    // Frequency array for 26 lowercase English letters
    int count[26] = {0};

    for (int i = 0; i < len_s; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

// Local testing block
int main() {
    // Test Case 1: Typical Anagram
    char s1[] = "anagram";
    char t1[] = "nagaram";
    printf("Test 1 Result: %s (Expected: true)\n", isAnagram(s1, t1) ? "true" : "false");

    // Test Case 2: Edge Case (Different lengths / Not an anagram)
    char s2[] = "rat";
    char t2[] = "car";
    printf("Test 2 Result: %s (Expected: false)\n", isAnagram(s2, t2) ? "true" : "false");

    return 0;
}