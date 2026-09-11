## Problem: Valid Anagram (Easy)
**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
Used a fixed-size frequency array of 26 integers to track the balance of characters across both strings. Incrementing for characters in `s` and decrementing for characters in `t` allows checking for an exact match in a single pass after verifying equal lengths.

### Complexity
- Time: $O(n)$
- Space: $O(1)$ (since the frequency array is fixed to 26 elements)

### Notes
An early exit condition checking if `strlen(s) != strlen(t)` optimizes performance by rejecting mismatched strings immediately before counting.