/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

char** fizzBuzz(int n, int* returnSize) {
    // Allocate memory for n strings (each string pointer)
    char** result = (char**)malloc(n * sizeof(char*));
    
    // Loop from 1 to n
    for (int i = 1; i <= n; i++) {
        // Allocate enough space for each string (max 8 chars: "FizzBuzz" + '\0')
        result[i - 1] = (char*)malloc(9 * sizeof(char));
        
        if (i % 3 == 0 && i % 5 == 0) {
            sprintf(result[i - 1], "FizzBuzz");
        } else if (i % 3 == 0) {
            sprintf(result[i - 1], "Fizz");
        } else if (i % 5 == 0) {
            sprintf(result[i - 1], "Buzz");
        } else {
            sprintf(result[i - 1], "%d", i);
        }
    }

    *returnSize = n;  // Set the size of the array
    return result;    // Return the result array
}
