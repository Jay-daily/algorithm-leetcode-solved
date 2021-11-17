class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>res;
        vector<int>odd;
        vector<int>even;
        for(int i =0; i<nums.size(); i++){
            if(nums[i]%2==1) odd.push_back(nums[i]);
            else even.push_back(nums[i]);
        }
        for(int i =0; i<odd.size(); i++){
            res.push_back(even[i]);
            res.push_back(odd[i]);
        }
        return res;
    }
};
