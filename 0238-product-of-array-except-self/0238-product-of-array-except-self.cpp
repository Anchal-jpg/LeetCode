class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1); // Use a vector for the result, initialized with 1
        
        // Step 1: Compute the product of all elements to the left of each index.
        int prodLeft = 1;
        for (int i = 0; i < n; i++) {
            result[i] = prodLeft;
            prodLeft *= nums[i];
        }
        
        // Step 2: Compute the product of all elements to the right of each index.
        int prodRight = 1;
        for (int i = n - 1; i >= 0; i--) {
            result[i] *= prodRight;
            prodRight *= nums[i];
        }
        
        return result;
    }
};
