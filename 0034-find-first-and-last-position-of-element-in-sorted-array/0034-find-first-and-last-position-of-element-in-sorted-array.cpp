class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>arr(2,-1);
        int n=nums.size();
        int low=0;
        int high=n-1;
        int lans=-1;
        int rans=-1;

        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                lans=mid;
                high=mid-1;
            }else if(nums[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
            

        }
        arr[0]=lans;
        low=0;
        high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                rans=mid;
                low=mid+1;
            }else if(nums[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        arr[1]=rans;
        return arr;

    }
};