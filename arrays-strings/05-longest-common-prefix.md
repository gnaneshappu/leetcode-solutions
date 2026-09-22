## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

Compare the characters of the first string with the characters
at the same position in the remaining strings. Stop when a
character differs or when the end of a string is reached.

### Complexity

- Time: O(n * m)
- Space: O(1)

### Notes

The common prefix is the longest sequence of characters shared
by all the given strings.