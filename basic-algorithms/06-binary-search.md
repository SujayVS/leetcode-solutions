## Problem: Binary Search (Easy)
**Link:** https://leetcode.com/problems/binary-search/

### Approach
Used the standard iterative binary search algorithm on a sorted array. At each iteration, the middle element is compared with the target; the search range is halved by moving the `low` or `high` pointers accordingly.

### Complexity
- Time: $O(\log n)$
- Space: $O(1)$

### Notes
Calculated the midpoint using `low + (high - low) / 2` rather than `(low + high) / 2` to prevent potential integer overflow for large bounds.