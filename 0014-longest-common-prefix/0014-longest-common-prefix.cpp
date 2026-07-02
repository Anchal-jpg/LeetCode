class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    // Check if the input list is empty
    string ans="";
    if (strs.empty()) {
        return "";
    }
    
    // // Initialize the prefix as the first string in the array
    // string prefix = strs[0];
    
    // // Loop through the rest of the strings in the list
    // for (int i = 1; i < strs.size(); i++) {
    //     // Compare the current prefix with the string character by character
    //     while (strs[i].find(prefix) != 0) {
    //         // Reduce the prefix by removing one character from the end
    //         prefix = prefix.substr(0, prefix.size() - 1);
    //         // If there is no common prefix, return an empty string
    //         if (prefix.empty()) {
    //             return "";
    //         }
    //     }
    // }
    
    // return prefix;
    sort(strs.begin(),strs.end());
    string first=strs[0];
    string last=strs[strs.size()-1];
    for(int i=0;i<first.length();i++){
        if(first[i]!=last[i]){
            break;
        }
        ans.push_back(first[i]);
    }
    return ans;

}

        
    

};