#include <stdio.h>

int search(int* nums, int numsSize, int target) {
    int low = 0;
    int high = numsSize - 1;

    while (low <= high) {
        // Prevent integer overflow compared to (low + high) / 2
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

// Local testing block
int main() {
    // Test Case 1: Target exists in array
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    int target1 = 9;
    printf("Test 1 Result: %d (Expected: 4)\n", search(nums1, 6, target1));

    // Test Case 2: Edge Case (Target not in array / single element search)
    int nums2[] = {-1, 0, 3, 5, 9, 12};
    int target2 = 2;
    printf("Test 2 Result: %d (Expected: -1)\n", search(nums2, 6, target2));

    return 0;
}