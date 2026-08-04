#include<string>
#include<algorithm>
class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        int n = s.length();
        int end = n - 1;

        // Traverse the string backwards
        while (end >= 0) {
            // Skip spaces if there are any trailing or consecutive spaces
            if (s[end] == ' ') {
                end--;
                continue;
            }

            // Find the start of the current word
            int start = end;
            while (start >= 0 && s[start] != ' ') {
                start--;
            }

            // Extract the word using substring (from start + 1, length is end - start)
            std::string word = s.substr(start + 1, end - start);

            // Append the word to our result string
            if (result.empty()) {
                result += word;
            } else {
                result += " " + word;
            }

            // Move the pointer past the processed word
            end = start - 1;
        }

        return result;
    }
};