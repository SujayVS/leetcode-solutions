#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;

    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    *returnSize = 0;
    return NULL;
}

// Local testing block
int main() {
    int returnSize;

    // Test Case 1: Typical Input
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int* res1 = twoSum(nums1, 4, target1, &returnSize);
    if (res1 != NULL && returnSize == 2) {
        printf("Test 1 Passed: [%d, %d]\n", res1[0], res1[1]);
        free(res1);
    } else {
        printf("Test 1 Failed\n");
    }

    // Test Case 2: Edge Case (Negative numbers & duplicates)
    int nums2[] = {-3, 4, 3, 90};
    int target2 = 0;
    int* res2 = twoSum(nums2, 4, target2, &returnSize);
    if (res2 != NULL && returnSize == 2) {
        printf("Test 2 Passed: [%d, %d]\n", res2[0], res2[1]);
        free(res2);
    } else {
        printf("Test 2 Failed\n");
    }

    return 0;
}