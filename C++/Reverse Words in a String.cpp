#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    // Function to reverse words in a given string
    string reverseWords(string s) {
        string word;    // To store a single word
        string ans;     // To store the reversed words

        // Loop through the string in reverse order
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                word.push_back(s[i]); // Build the current word in reverse order

                // Check if we've reached the end of a word
                if ((i > 0 && s[i - 1] == ' ') || (i == 0)) {
                    // Reverse and append the word to the result string
                    for (int j = word.length() - 1; j >= 0; j--) {
                        ans.push_back(word[j]);
                    }
                    ans.push_back(' '); // Add a space between words
                    word.clear(); // Clear the word buffer for the next word
                }
            }
        }
        ans.pop_back(); // Remove the trailing space
        return ans; // Return the string with reversed words
    }
};

int main() {
    Solution solution;

    // Input string from the user
    cout << "Enter a string: ";
    string input;
    getline(cin, input);

    // Call the reverseWords function and output the result
    string reversed = solution.reverseWords(input);
    cout << "Reversed: " << reversed << endl;

    return 0;
}
