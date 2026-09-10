class Solution {
public:
    int LCS(string &text1, string &text2,int idx1,int idx2){
        if(text1.size()==0 || text1.size()==0) return 0;
         if(idx1 == text1.size() || idx2 == text2.size())
            return 0;
        //if(idx1==)
        if(text1[idx1]==text2[idx2]){
            return 1+LCS(text1,text2,idx1+1,idx2+1);
        }else{
            return max(
    LCS(text1, text2, idx1 + 1, idx2),
    LCS(text1, text2, idx1, idx2 + 1)
);
        }
        // return x;
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(text1[i-1]==text2[j-1]){
                    dp[i][j]=1+(dp[i-1][j-1]);
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
    return dp[n][m];

    //return LCS(text1,text2,0,0);
    
        
    }
};