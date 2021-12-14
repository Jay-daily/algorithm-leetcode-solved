class Solution {
public:
    
    void permu(vector<int>nums, int i, vector<vector<int>>&res){
        if(i == nums.size()) res.push_back(nums);
        else
        {
            for(int j = i; j< nums.size(); j++){
                swap(nums[i], nums[j]);
                permu(nums, i+1, res);
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        permu(nums, 0, res);
        return res;
    }
};
