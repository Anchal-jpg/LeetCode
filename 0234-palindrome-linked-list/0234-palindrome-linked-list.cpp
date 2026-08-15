/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool palin(vector<int>&arr){
        vector<int>brr;
        int n=arr.size();
        for(int i=0;i<n;i++){
            brr.push_back(arr[i]);
        }
        reverse(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(arr[i]!=brr[i])
            return false;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        vector<int>arr;
        ListNode* temp=head;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;

        }
        if(palin(arr)){
           return true;
        }
        return false;
        
    }
};