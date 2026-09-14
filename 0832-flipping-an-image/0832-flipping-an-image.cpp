class Solution {
public:
   
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        // int n = image.size();
        // int m = image[0].size();

        // for (int i = 0; i < n; i++) {
        //     int left = 0, right = m - 1;

        //     while (left <= right) {
        //         // swap + invert in one step
        //         int temp = image[i][left] ^ 1;
        //         image[i][left] = image[i][right] ^ 1;
        //         image[i][right] = temp;

        //         left++;
        //         right--;
        //     }
        // }

        // return image;
        //vector<vector<int>>ans;
        for(auto &x: image){
            reverse(x.begin(),x.end());
        }
        for(auto &x: image){
            for(int &i:x){
                if(i==0){
                    i=1;
                }else{
                    i=0;
                }
            }
        }
    return image;

       
        
    }
};