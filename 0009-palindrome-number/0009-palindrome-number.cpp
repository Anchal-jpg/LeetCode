class Solution {
public:
    bool isPalindrome(int x) {
       
       if(x<0) return 0;
       int ori=x;
       long long reverse=0;
       while(x>0){
            int dig=x%10;
            reverse=reverse*10+dig;
            x/=10;

       }
       return ori==reverse;

    
}
        
        
    
};