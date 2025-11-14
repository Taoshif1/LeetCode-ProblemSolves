int findNumbers(int* nums, int numsSize) {
    int countEven = 0;

    for (int i = 0; i < numsSize; i++) {
        int x = nums[i];
        int digits = 0;

        // Count digits
        while (x > 0) {
            x /= 10;
            digits++;
        }

        if (digits % 2 == 0) {
            countEven++;
        }
    }

    return countEven;
}
