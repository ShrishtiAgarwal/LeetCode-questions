class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,s,s1;
        vector<int>v(2);
        vector<int>j=nums;
        
        sort(nums.begin(),nums.end());
       while(l<r)
       {
           int h=nums[l]+nums[r];
           if(h==target)
           {
              s=nums[l];
               s1=nums[r];
               break;
           }
           else if(h<target)
           {
               l++;
               continue;
           }
           else
               r--;
       }
        //cout<<s<<" "<<s1;
        int p=0;
        for(int i=0;i<j.size();i++)
        {
            if(j[i]==s && p!=1)
            {
              v[0]=i;
                p=1;
                continue;
            } 
            if(j[i]==s1)
            {
                v[1]=i;
               
            }   
        }
        return v;
        
    }
};