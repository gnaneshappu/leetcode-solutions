## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

Keep track of the lowest price seen so far. For each price, calculate
the profit that would be made by selling on that day and update the
maximum profit if it is larger.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

If the prices continuously decrease, no profitable transaction is
possible, so the answer is 0.