/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));
    
    for(int i = 0; i < numsSize; i++) {
        result[i] = nums[i] * nums[i];
    }

    qsort(result, numsSize, sizeof(int), compare);

    *returnSize = numsSize;
    return result;
}

// =================== WAY 2 - WITHOUT QSORT ==========================

  /**
 * Note: The returned array must be malloced, assume caller calls free().
 */

// int* sortedSquares(int* nums, int numsSize, int* returnSize) {
//     int left = 0;
//     int right = numsSize - 1;
//     int index = numsSize - 1;

//     int* result = (int*)malloc(numsSize * sizeof(int));

//     while (left <= right) {
//         int leftSq = nums[left] * nums[left];
//         int rightSq = nums[right] * nums[right];

//         if (leftSq > rightSq) {
//             result[index] = leftSq;
//             left++;
//         } else {
//             result[index] = rightSq;
//             right--;
//         }
//         index--;
//     }

//     *returnSize = numsSize;
//     return result;
// }
