class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //deep
        int n=nums.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            int a=nums[i];
            int more=(target-a);
            if(mpp.find(more)!=mpp.end())
            {
              return {mpp[more],i};
            }
            else
            {
                mpp[a]=i;
            }
        }
        return{};
    }
    
};