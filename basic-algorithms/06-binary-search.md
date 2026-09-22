## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

Use two pointers, `left` and `right`, to represent the current
search range. Check the middle element. If it matches the target,
return its index. If the middle element is smaller than the target,
search the right half; otherwise, search the left half.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

Binary search requires the input array to be sorted.