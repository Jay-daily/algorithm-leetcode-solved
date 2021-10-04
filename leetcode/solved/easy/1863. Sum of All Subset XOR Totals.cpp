
//thanks to https://www.youtube.com/watch?v=CJ9EicV9nWc&ab_channel=CODE_CROSING


class Solution {
public:
    
    int subsetXORSum(vector<int>& nums) {
        return helper(nums, 0,0);
    }
    
    int helper(vector<int>&nums,int level, int currentXOR){
        
        if(level == nums.size()) return currentXOR;
        
        int inc = helper(nums,level +1,currentXOR^nums[level]);
        int exc = helper(nums,level +1,currentXOR);
        
        return inc + exc;
    }
};
