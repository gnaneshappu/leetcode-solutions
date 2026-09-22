## Problem: Reverse a Linked List (Easy)

**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach

Use three pointers: `previous`, `current`, and `nextNode`.
Move through the linked list and reverse each node's `next`
pointer so that the list points in the opposite direction.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The linked list is reversed in-place without creating a new list.