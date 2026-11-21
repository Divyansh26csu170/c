#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    int freq[26] = {0};

    if (strlen(s) != strlen(t)) {
        return false;
    }

    // Count characters in s
    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }

    // Decrease counts using characters in t
    for (int i = 0; t[i] != '\0'; i++) {
        freq[t[i] - 'a']--;

        if (freq[t[i] - 'a'] < 0) {
            return false;
        }
    }

    return true;
}
