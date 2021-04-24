class Solution {
public:
    bool isPowerOfTwo(int n) {
        while(n!=0){
            if(n==1)
                return true;
            if(n%2 == 0){    
                n=n/2;
                continue;
            }else
                return false;
        }
        return false;
    }
};