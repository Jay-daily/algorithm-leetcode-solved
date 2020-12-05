class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int numssum =0;
        int sum =0;
        int n = nums.size();
        for(int i =0; i < n; i++){
            numssum += nums[i];
            if(nums[i] == n)
            {
                 sum = n*(n+1)/2;
            }           
        }
        if(sum != 0)
            return (sum-numssum);
        else
            return n;
        
    }
};
