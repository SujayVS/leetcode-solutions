## Problem: Longest Common Prefix (Easy)
**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
Used horizontal scanning by initializing the prefix to the first string in the array. For each subsequent string, characters are compared character by character until a mismatch occurs, truncating the prefix string at the mismatch index.

### Complexity
- Time: $O(S)$, where $S$ is the sum of all characters across all strings.
- Space: $O(1)$ auxiliary space (excluding the allocated output string).

### Notes
Includes an early break if the prefix becomes empty (`prefix[0] == '\0'`), avoiding redundant scans over the remaining strings.