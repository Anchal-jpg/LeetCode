class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=0;
        int n=nums.size();

        int high=n-1;
        while(low<high){
            int mid=(low+high)/2;
            if(nums[mid]<nums[mid+1]){
                //search in right side
                low=mid+1;

                

            }else if(nums[mid]>nums[mid+1]){
                // Not doing mid-1 because including equals to case also in this 
                high=mid;

            }
        }

        return low;
    }
};