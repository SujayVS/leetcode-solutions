#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int insertPos = 0;

    // Shift all non-zero elements forward
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[insertPos] = nums[i];
            insertPos++;
        }
    }

    // Fill the remainder of the array with zeroes
    while (insertPos < numsSize) {
        nums[insertPos] = 0;
        insertPos++;
    }
}

// Local testing block
int main() {
    // Test Case 1: Typical array with zeroes dispersed
    int nums1[] = {0, 1, 0, 3, 12};
    int size1 = 5;
    moveZeroes(nums1, size1);
    printf("Test 1 Result: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", nums1[i]);
    }
    printf("(Expected: 1 3 12 0 0)\n");

    // Test Case 2: Edge Case (Array with only zeroes or single element)
    int nums2[] = {0};
    int size2 = 1;
    moveZeroes(nums2, size2);
    printf("Test 2 Result: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", nums2[i]);
    }
    printf("(Expected: 0)\n");

    return 0;
}