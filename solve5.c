int findMaxConsecutiveOnes(int* nums, int numsSize) {
    // 1. Initialize two variables to track the streaks.
    int max_streak = 0;
    int current_streak = 0;

    // 2. Loop through every element of the array.
    for (int i = 0; i < numsSize; i++) {
        
        // Check if the current element is a 1.
        if (nums[i] == 1) {
            // Case 1: Found a '1' - Continue the streak.
            current_streak = current_streak + 1;
            
            // Check if the current streak is the largest found so far.
            if (current_streak > max_streak) {
                max_streak = current_streak;
            }
        } else {
            // Case 2: Found a '0' - The streak is broken.
            current_streak = 0;
        }
    }
    
    // 3. Return the maximum streak recorded after checking all elements.
    return max_streak;
}
