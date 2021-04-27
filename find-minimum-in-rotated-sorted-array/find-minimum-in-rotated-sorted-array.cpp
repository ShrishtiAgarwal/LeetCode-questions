class Solution {
public:
    int findMin(vector<int>& nums) {
        int left =0;
        int right = nums.size()-1;
        if(nums.size() == 1){
            return nums[0];
        }
        if(nums.size() == 2){
            if(nums[0] > nums[1])
                return nums[1];
            else
                return nums[0];
        }
        while(left<=right) {
            int mid = (left+right)/2;
            if(mid == 0){
                if(nums[mid+1] <= nums[nums.size()-1] && nums[mid+1] > nums[mid]){
                    return nums[mid];
                }
                else{
                     left = mid+1;
                }
            }
            else if(mid == nums.size() -1) {
                if(nums[mid-1] > nums[nums.size()-1]){
                    return nums[mid];
                }
                else{
                    right = mid -1;
                }
            }
            else if(nums[mid-1] > nums[mid] && nums[mid+1] > nums[mid] ){
                return nums[mid];
            }
            else if(nums[mid] > nums[nums.size()-1]){
                left = mid+1;
            }
            else
                right = mid -1;
        }
        return nums[0];
        
    }
};