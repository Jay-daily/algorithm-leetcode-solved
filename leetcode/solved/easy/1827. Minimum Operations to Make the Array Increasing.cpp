class Solution {
public:
    int minOperations(vector<int>& nums) {
        int res =0;
        int len = nums.size();
        for(int i =0; i<len-1;i++){
            if(nums[i]>=nums[i+1]){
                res += (nums[i] - nums[i+1] +1);
                nums[i+1] += (nums[i] - nums[i+1] +1);
            }a
        }
        return res;
    }
};
