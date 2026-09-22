## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

Use a stack to store opening brackets. When a closing bracket is
encountered, compare it with the most recent opening bracket in
the stack. If they do not match, the string is invalid.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The string is valid only when every opening bracket has a matching
closing bracket in the correct order.