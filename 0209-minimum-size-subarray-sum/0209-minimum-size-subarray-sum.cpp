class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n=nums.size();
        int ans=INT_MAX;
        int left=0;
        int sum=0;
        for(int right=0;right<n;right++){
            sum+=nums[right];
            while(sum>=target){
                //remove left
                 ans = min(ans, right - left + 1);

                // remove left
                sum -= nums[left];
                left++;
            }
            
        }
        if(ans==INT_MAX){
            return 0;
        }
        return ans;
    }
};