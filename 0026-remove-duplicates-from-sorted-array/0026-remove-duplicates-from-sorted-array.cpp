class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        if(nums.empty()){
            return 0;
        } else {
        for(int i=0;i<nums.size();i++){
            
             if(nums[i]!=nums[j]) {

                
                j++;
                nums[j]=nums[i];

              
            }
            
            }
        
            
        }
        return j+1;
    }
};