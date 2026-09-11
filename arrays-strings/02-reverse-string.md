## Problem: Reverse String (Easy)
**Link:** https://leetcode.com/problems/reverse-string/

### Approach
Used a two-pointer technique with pointers initialized at the start (`left`) and end (`right`) of the array. The characters at both pointers are swapped, and the pointers increment and decrement respectively until they meet in the center. This modifies the array in-place.

### Complexity
- Time: $O(n)$
- Space: $O(1)$

### Notes
Handled edge cases like single-element arrays gracefully since the `left < right` loop condition terminates immediately without making invalid swaps.