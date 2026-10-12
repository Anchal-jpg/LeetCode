class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int count=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                count++;
            }
        }
        int maxx=count;
        for(int right=k;right<n;right++){
            if(s[right]=='a' || s[right]=='e' || s[right]=='i' || s[right]=='o' || s[right]=='u'){
                count++;
        }
           if(s[right-k]=='a' || s[right-k]=='e' || s[right-k]=='i' || s[right-k]=='o' || s[right-k]=='u'){
            count--;
           }
           maxx=max(count,maxx);
        }
           return maxx;

        
    }
};