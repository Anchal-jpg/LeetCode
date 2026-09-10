class Solution {
public:
    string decitoBin(int n){
        if(n==0) return "0";
        string ans="";
        while(n>0){
            ans+=(n%2)+'0';
            n/=2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    int hammingDistance(int x, int y) {
        string c=decitoBin(x);
        string d=decitoBin(y);
        while(c.length()<d.length()) c='0'+c;
        while(d.length()<c.length()) d='0'+d;

        int count=0;
        for(int i=0;i<c.length();i++){
            
                if(c[i]!=d[i]){
                    count++;

                
            }

        }

        return count;
    }
};
// class Solution {
// public:
//     int hammingDistance(int x,int y){

//         int c=0;
//         int n=x^y;
//         while(n){
//             n=n&(n-1);
//             c++;
//         }
//         return c;
        
//     }
// };

