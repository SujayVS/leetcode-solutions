## Problem: Move Zeroes (Easy)
**Link:** https://leetcode.com/problems/move-zeroes/

### Approach
Used a two-pointer in-place write technique. A pointer `insertPos` tracks the destination index for the next non-zero number. After copying all non-zero values to their relative positions, a second loop sets all remaining indices up to `numsSize` to 0.

### Complexity
- Time: $O(n)$ (two sequential passes over the array)
- Space: $O(1)$ in-place modification

### Notes
Avoided allocating extra arrays, maintaining the relative order of non-zero elements while adhering to the in-place problem constraint.