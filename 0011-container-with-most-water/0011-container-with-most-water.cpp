// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int area=-1;
//         int n=height.size();
//         int maxi=INT_MIN;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 area=(j-i)*min(height[i],height[j]);
//                 maxi=max(maxi,area);

//             }
//         }
//         return maxi;
        
//     }

// };



// //Better Approach 


class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int ans=-1;
        int area=0;
        while(left<right){
            area=(right-left)*min(height[right],height[left]);
            ans=max(area,ans);
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }


        }
        return ans;
    }
};

