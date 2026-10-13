class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>freq;
        int low=0;
        int res=0;
        
        int n=s.size();
       
        for(int high=0;high<n;high++){

            freq[s[high]]++;
            ///Here k i s the length of the window 
            int k=high-low+1;
            while(freq.size()<k){
                freq[s[low]]--;
                if(freq[s[low]]==0){
                    freq.erase(s[low]);
                }
                low++;
                k=high-low+1;
            }
            // agr freq ki size barabar hai jitne elements window mw hai matlab sareb hi distinct numbers hai
            if(freq.size()==k){
                int len=high-low+1;
                res=max(res,len);
            }
        }

        return res;

    }
};