// // class Solution {
// // public:
// //     int climbStairs(int n) {
// //         if(n<=2) return n;

// //         int a=1;
// //         int b=2;
// //         int c;
// //         for(int i=3;i<=n;i++){
// //             c=a+b;
// //             a=b;
// //             b=c;
// //         }
// //         return b;
// //     }
// // };

//Recursion Solution

// class Solution {
// public:
//     int climbStairs(int n) {
//         if(n<=2) return n;
//         return climbStairs(n-1)+climbStairs(n-2);

       
//     }
// };

//Dp (Memoization)
// class Solution {
// public:
//     int helper(int n,vector<int>&dp) {
//         if(n<=2) return n;
//         if(dp[n]!=-1) {
//         return dp[n];
//         }
//         return dp[n]=helper(n-1,dp)+helper(n-2,dp);

        
//     }
//     int climbStairs(int n){
//         vector<int>dp(n+1,-1);
//         return helper(n,dp);

//     }
// };


//Dp (Tabulation)
class Solution {
public:
   
    int climbStairs(int n){
        vector<int>dp(n+1,-1);
        if(n==1 || n==2) return n;
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};