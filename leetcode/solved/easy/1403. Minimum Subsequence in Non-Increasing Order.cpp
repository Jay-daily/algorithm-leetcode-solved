class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int>res;
        if(nums.size()==1) return nums;
        
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i =0; i< nums.size(); i++){
            sum+=nums[i];
        }
        int sum2 =0;
        for(int i =nums.size()-1; i>=0; i--){
            sum2+= nums[i];
            sum-= nums[i];
            res.push_back(nums[i]);
            if(sum2>sum) return res;
        }
        return res;
    }
};
