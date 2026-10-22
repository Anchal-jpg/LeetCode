
class Solution {
public:
    string minWindow(string s, string t) {
        if (t.empty() || s.size() < t.size()) return "";

        unordered_map<char, int> freq;

        for (int i = 0; i < t.size(); i++) {
            freq[t[i]]++;
        }

        int left = 0;
        int minLen = INT_MAX;
        int start = 0;
        int required = t.size();

        for (int right = 0; right < s.size(); right++) {
            char ch = s[right];

            if (freq.find(ch) != freq.end()) {
                if (freq[ch] > 0) {
                    required--;
                }
                freq[ch]--;
            }

            while (required == 0) {
                int len = right - left + 1;

                if (len < minLen) {
                    minLen = len;
                    start = left;
                }

                char leftChar = s[left];

                if (freq.find(leftChar) != freq.end()) {
                    freq[leftChar]++;

                    if (freq[leftChar] > 0) {
                        required++;
                    }
                }

                left++;
            }
        }

        if (minLen == INT_MAX) return "";
        return s.substr(start, minLen);
    }
};
