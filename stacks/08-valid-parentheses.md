## Problem: Valid Parentheses (Easy)
**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
Used an array-based stack implementation to match corresponding brackets. Open brackets are pushed onto the stack. When a closing bracket is encountered, the stack is checked for emptiness before popping the top element and confirming it forms a valid matching pair.

### Complexity
- Time: $O(n)$
- Space: $O(n)$ worst-case stack storage

### Notes
Implemented an early exit if the string length is odd (`len % 2 != 0`), since an odd number of brackets can never be fully paired.