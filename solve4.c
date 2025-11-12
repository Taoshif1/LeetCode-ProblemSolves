#include <stdbool.h>
#include <string.h>

bool canConstruct(char* ransomNote, char* magazine) {
    int freq[26] = {0};  // array to hold counts of each letter

    // Count each letter in magazine
    for (int i = 0; magazine[i] != '\0'; i++) {
        freq[magazine[i] - 'a']++;  // increase count for this letter
    }

    // Check each letter in ransomNote
    for (int i = 0; ransomNote[i] != '\0'; i++) {
        freq[ransomNote[i] - 'a']--;      // use one letter
        if (freq[ransomNote[i] - 'a'] < 0) {
            // magazine didn’t have enough of this letter
            return false;
        }
    }

    return true;  // all letters found
}
