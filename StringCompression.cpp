#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0; // Pointer to write compressed output
        int i = 0;     // Iteration pointer

        while (i < chars.size()) {
            char currentChar = chars[i];
            int count = 0;
            
            // Count the frequency of the character
            while (i < chars.size() && chars[i] == currentChar) {
                count++;
                i++;
            }
            
            // Write the character itself
            chars[write++] = currentChar;

            // Write the count if greater than 1
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[write++] = c; // Store digits of count as characters
                }
            }
        }

        return write; // New size of the compressed vector
    }
};
