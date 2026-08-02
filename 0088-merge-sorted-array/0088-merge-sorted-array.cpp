class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;  // temporary vector

        int i = 0, j = 0;
        while(i < m && j < n) {
            if(nums1[i] <= nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            } else {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        // agar nums1 me elements bache ho
        while(i < m) {
            ans.push_back(nums1[i]);
            i++;
        }

        // agar nums2 me elements bache ho
        while(j < n) {
            ans.push_back(nums2[j]);
            j++;
        }

        // nums1 ko update karna
        for(int k=0; k<m+n; k++) {
            nums1[k] = ans[k];
        }
    }
};
