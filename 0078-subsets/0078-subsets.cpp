class Solution {
public:
    void solve(int index,vector<int>&nums,vector<vector<int>>&current,vector<int>&ans){
        int n=nums.size();
        if(index==n){
            current.push_back(ans);
            return;
        }
        //Include;
        ans.push_back(nums[index]);
        solve(index+1,nums,current,ans);
        ans.pop_back();
        solve(index+1,nums,current,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>current;
        vector<int>ans;
        solve(0,nums,current,ans);
        return current;
    }
};