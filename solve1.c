/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    // Allocate memory dynamically for the result array
    int* result = (int*)malloc(numsSize * sizeof(int));
    
    // Variable to keep track of the running total
    int sum = 0;

    // Loop through each element of nums
    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];        // Add current element to the running total
        result[i] = sum;       // Store that running total in result[i]
    }

    // Set the return size 
    *returnSize = numsSize;

    // Return the dynamically allocated array
    return result;
}


