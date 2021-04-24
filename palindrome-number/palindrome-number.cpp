class Solution {
public:
    bool isPalindrome(int x) {
        long long int r,s=0,y=x;
        if(x<0)
            return false;
        while(x!=0){
            r=x%10;
            s=s*10+r;
            x=x/10;
            
        }
        if(y==s){
            return true;
        }else
            return false;
        
    }
};