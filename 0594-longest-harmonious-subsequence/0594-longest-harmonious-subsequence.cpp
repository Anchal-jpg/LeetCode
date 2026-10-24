class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>freq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(freq.find(nums[i]+1)!=freq.end()){
                ans=max(freq[nums[i]]+freq[nums[i]+1],ans);
            }

        }
        return ans;
        
    }
};