class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        int n=nums.size();
        vector<int>arr1;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        int ans=0;
        for(auto x: freq){
            if(x.second>floor(n/3)){
                ans=x.first;
                arr1.push_back(ans);
            }

        }
        return arr1;
        
    }
};