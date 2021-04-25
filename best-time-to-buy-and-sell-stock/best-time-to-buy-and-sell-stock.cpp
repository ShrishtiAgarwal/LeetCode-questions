class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_arr[prices.size()];
        int max_arr[prices.size()];
        int minn=prices[0];
        int maxx=-prices[prices.size()-1];
        for (int i=0;i<prices.size();i++){
            if(prices[i] < minn)
                minn =  prices[i];
            min_arr[i] = minn;
          
        }
        for (int i=prices.size()-1;i>=0;i--){
            if(prices[i] > maxx)
                maxx = prices[i];
            max_arr[i] = maxx;
        }
        int ans=0;
        for(int i=0;i<prices.size();i++){
            if(max_arr[i] -min_arr[i] > ans){
                ans=max_arr[i] -min_arr[i];
            }
                
            }
        return ans;
    }
};