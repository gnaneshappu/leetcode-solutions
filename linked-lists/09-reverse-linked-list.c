#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* previous = NULL;
    struct ListNode* current = head;

    while (current != NULL) {
        struct ListNode* nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }

    return previous;
}

void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}

int main() {
    // Test 1: typical case
    struct ListNode n1 = {1, NULL};
    struct ListNode n2 = {2, NULL};
    struct ListNode n3 = {3, NULL};

    n1.next = &n2;
    n2.next = &n3;

    struct ListNode* result1 = reverseList(&n1);
    printList(result1);

    // Test 2: edge case - single node
    struct ListNode n4 = {1, NULL};

    struct ListNode* result2 = reverseList(&n4);
    printList(result2);

    return 0;
}