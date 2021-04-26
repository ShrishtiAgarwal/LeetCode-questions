class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxx=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
                ans = max(nums[i],ans+nums[i]);
                if(maxx<ans)
                    maxx =ans;
            
        }
        return maxx;
        
    }
};