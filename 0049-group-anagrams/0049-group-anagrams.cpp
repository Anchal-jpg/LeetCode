class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>group;
        for(string s:strs ){
            string key=s;
            sort(key.begin(),key.end());
            group[key].push_back(s);

        }
        vector<vector<string>>res;
        for(auto &p:group){
            res.push_back(p.second);
        }
        sort(res.begin(),res.end(),[](vector<string>&a,vector<string>&b){
            return a[0]<b[0];
        });
        return res;
    }
};