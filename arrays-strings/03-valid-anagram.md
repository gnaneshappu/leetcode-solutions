## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

Use a frequency array of size 26 to count the occurrence of each
letter in both strings. If the frequencies match for every letter,
the strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The strings must have the same length before checking character
frequencies.