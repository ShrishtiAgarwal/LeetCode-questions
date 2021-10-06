class Solution {
public:
    int trailingZeroes(int n) {
   
        // for(int i=1;i<=n;i++){
        //     fact=fact*i
        // }
        int i = 5, c=0;
        while(1){
            int x = n/i;
                c=c+x;
                i=i*5;
                if(n/i <= 0){
                    break;
                }
        }
        return c;
    }
};

    