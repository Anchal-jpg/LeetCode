class Solution {
public:
    int findMaxFreq(vector<int>& f) {
    int maxfreq = 0;

    for (int i = 0; i < 26; i++) {
        maxfreq = max(maxfreq, f[i]);
    }

    return maxfreq;
}
    int characterReplacement(string s, int k) {
        int low=0;
        int res=INT_MIN;
        vector<int>f(26,0);
        int n=s.size();
        for(int high=0;high<n;high++){
            f[s[high]-'A']++;
            int len=high-low+1;
            int maxCount=findMaxFreq(f);
            int diff=len-maxCount;
            while(k<diff){
                f[s[low]-'A']--;
                low++;
                maxCount=findMaxFreq(f);
                len=high-low+1;
                diff=len-maxCount;

            }
            len=high-low+1;
            res=max(res,len);

        }
        return res;
    }
};