//this Solution does not used Radix Sort

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int maxi=0;
        for(int i=0;i<n-1;i++){
            maxi=max(nums[i+1]-nums[i],maxi);
            

        }
        return maxi;
        
    }
};
