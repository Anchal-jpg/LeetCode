// class Solution {
// public:
//     vector<int> dailyTemperatures(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>ans;
        
//         for(int i=0;i<n;i++){
//             int temp=0;
//             for(int j=i+1;j<n;j++){
//                 if(nums[i]<nums[j]){
//                     temp=j-i;
//                     break;
//                 }
//             }
//             ans.push_back(temp);
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        int n = temperatures.size();

        vector<int> ans(n, 0);

        stack<int> st;   // indices

        for(int i = n - 1; i >= 0; i--) {

            while(!st.empty() &&
                  temperatures[st.top()] <= temperatures[i]) {
                st.pop();
            }

            if(!st.empty()) {
                ans[i] = st.top() - i;
            }

            st.push(i);
        }

        return ans;
    }
};