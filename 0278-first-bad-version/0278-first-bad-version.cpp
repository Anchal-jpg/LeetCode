// // The API isBadVersion is defined for you.
// // bool isBadVersion(int version);

// class Solution {
// public:
//     int firstBadVersion(int n) {
//         for(int i=1;i<=n;i++){
//             if(isBadVersion(i))
//             return i;
//         }
//         return -1;
        

        
//     }
// };


// The API isBadVersion is defined for you.
// bool isBadVersion(int version);


//Better Solution Using Binary Search
//Its important
//Anchal you should study hard you should remember Your goals and don't try to be foolish all the random
//things you should think about you and your parents this is good for you please try to understand
//You should become like you before when it does't matter what others doing what others thinking you only focuesd on your goal and make happens what you want you have to think about what are you doing rightnow try to understand you and your situation


//The solution is using Binary search

class Solution {
public:
    int firstBadVersion(int n) {
        if(n==0) return -1;
        if(n==1) return 1;
        int left=1;
        int right=n;
        int ans=-1;
        while(left<=right){
           int mid=left+(right-left)/2;
            if(isBadVersion(mid)==false){
                left=mid+1;
                //ans=mid;

            }else if(isBadVersion(mid)==true){
                ans=mid;
                right=mid-1;
               // ans=mid;

            }
        }
       
        
    return ans;
        
    }
};