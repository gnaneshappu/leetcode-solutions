#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int position = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[position] = nums[i];
            position++;
        }
    }

    // Fill the remaining positions with zeroes
    while (position < numsSize) {
        nums[position] = 0;
        position++;
    }
}

void printArray(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main() {
    // Test 1: typical case
    int nums1[] = {0, 1, 0, 3, 12};
    moveZeroes(nums1, 5);
    printArray(nums1, 5);

    // Test 2: edge case - all zeroes
    int nums2[] = {0, 0, 0};
    moveZeroes(nums2, 3);
    printArray(nums2, 3);

    return 0;
}