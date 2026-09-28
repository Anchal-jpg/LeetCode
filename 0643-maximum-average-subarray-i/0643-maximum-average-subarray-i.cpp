// class Solution {
// public:
//     double findMaxAverage(vector<int>& nums, int k) {
//         int n=nums.size();
//         int Max=INT_MIN;
//         for(int i=0;i<=n-k;i++){
//             int sum=0;
//             for(int j=i;j<i+k;j++){
//                sum+=nums[j];

//             }
//             Max=max(sum,Max);



//         }
//         return double(Max)/k;
        
//     }
// };
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
       
        int sum=0;
        for(int i=0;i<k;i++){
             sum+=nums[i];
        }
         int Max=sum;
        for(int i=k;i<nums.size();i++){
            sum+=nums[i];
            sum-=nums[i-k];
            Max=max(Max,sum);

        }
        return double(Max)/k;
        
    }
};