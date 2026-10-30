class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        // int x = 0;

        // for(int num : nums) {
        //     x ^= num;
        // }

        // int diff = x & (-x);

        // int a = 0;
        // int b = 0;

        // for(int num : nums) {
        //     if(num & diff)
        //         a ^= num;
        //     else
        //         b ^= num;
        // }

        // return {a, b};/
        vector<int>ans;
        unordered_map<int,int>freq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(auto &x: freq){
            if(x.second==1){
                ans.push_back(x.first);
            }
        }
        return ans;

    }
};