## Problem: Best Time to Buy and Sell Stock (Easy)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
Used a one-pass greedy approach maintaining two variables: the minimum buying price seen so far (`minPrice`) and the maximum achievable profit (`maxProfit`). For each price, we update either the minimum purchase cost or calculate the potential profit if selling on that day.

### Complexity
- Time: $O(n)$
- Space: $O(1)$

### Notes
Handles edge cases where prices decrease continuously; the profit remains 0 since selling at a loss is never performed.