class Solution {
public:

    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int low=0;
        int res=INT_MIN;
        unordered_map<int,int>freq;
        for(int right=0;right<n;right++){
            freq[fruits[right]]++;
            while(freq.size()>2){
                freq[fruits[low]]--;
                if(freq[fruits[low]]==0){
                    freq.erase(fruits[low]);
                }
                low++;
            }
            int len=right-low+1;
            res=max(res,len);

        }
        return res;
        
    }
};