#include<algorithm>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first=strs.front();
        string end=strs.back();
        string result="";
        for(int i=0;i<min(first.size(),end.size());i++)
        {
            if(first[i]!=end[i])
            {
                return result;
            }
            result+=first[i];
        }
        return result;
    }
};    