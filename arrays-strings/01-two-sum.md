## Problem: Two Sum (Easy)
**Link:** https://leetcode.com/problems/two-sum/

### Approach
Used a nested loop brute-force approach to check every possible pair of elements in the array. If the sum of the elements at indices `i` and `j` equals the target, their indices are allocated on the heap and returned.

### Complexity
- Time: $O(n^2)$
- Space: $O(1)$

### Notes
Allocating memory with `malloc` is required by the problem prototype in C, and setting `*returnSize = 2` ensures the judge reads the exact number of output elements.