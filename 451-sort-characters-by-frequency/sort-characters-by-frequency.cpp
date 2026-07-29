#include<string>
#include<algorithm>
#include<unordered_map>
class Solution {
public:
 std::string frequencySort(std::string s) {
  int n = s.length();
        std::unordered_map<char, int> freqMap;
        
        // Step 1: Count frequencies
        for (char c : s) {
            freqMap[c]++;
        }
        
        // Step 2: Create buckets where index = frequency
        // Max possible frequency is n, so we need n + 1 buckets
        std::vector<std::vector<char>> buckets(n + 1);
        for (auto& pair : freqMap) {
            char ch = pair.first;
            int freq = pair.second;
            buckets[freq].push_back(ch);
        }
        
        // Step 3: Build the result string from highest frequency to lowest
        std::string result = "";
        for (int pos = n; pos >= 1; pos--) {
            if (!buckets[pos].empty()) {
                for (char c : buckets[pos]) {
                    result.append(pos, c); // Append character 'c', 'pos' times
                }
            }
        }
        
        return result;

 }

   
    
};