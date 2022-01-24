class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>res;
        map<int,int>m;
        for(int i =0; i<nums.size(); i++){
            if(++m[nums[i]] == 2) res.push_back(nums[i]);
        }
        return res;
    }
};
