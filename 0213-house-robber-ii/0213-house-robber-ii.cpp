class Solution {
public:
    int houserob1(vector<int>&arr){
        int n=arr.size();
        vector<int>dp(n+1,-1);
        if(n==1) return arr[0];
        dp[0]=arr[0];
        dp[1]=max(arr[0],arr[1]);
        for(int i=2;i<n;i++){
            dp[i]=max(dp[i-1],dp[i-2]+arr[i]);
        }

        return dp[n-1];

    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int>first;
        vector<int>second;
        for(int i=0;i<n;i++){
            if(i!=n-1){
                first.push_back(nums[i]);
            }
            if(i!=0){
                second.push_back(nums[i]);
            }

        }
        return max(houserob1(first),houserob1(second));
        
    }
};