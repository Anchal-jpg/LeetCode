class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
        int n=arr.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        
        int avg=sum/k;
        int count=0;
        if(avg>=threshold){
            count++;
        }
        int ans=avg;
        
        for(int right=k;right<n;right++){
            sum+=arr[right];
            sum-=arr[right-k];
            avg=sum/k;
            if(avg>=threshold){
                count++;
            }
        }
        return count;

    }
};