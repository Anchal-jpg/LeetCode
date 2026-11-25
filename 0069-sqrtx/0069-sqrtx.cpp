class Solution {
public:
    int mySqrt(int x) {
        int ans = 1;

        if(x == 0) return 0;

        for(int i = 1; i < x; i++) {
            if(1LL * i * i <= x) {
                ans = i;
            }
            else {
                break;
            }
        }

        return ans;
    }
};