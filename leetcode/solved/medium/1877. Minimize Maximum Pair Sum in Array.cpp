class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>v;
        for(int i =0; i<nums.size();i++){
            v.push_back(nums[i]+nums[nums.size()-1-i]);
        }
        sort(v.begin(),v.end());
        return v[v.size()-1];
    }
};



//better solution
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>v;
        int max = INT_MIN;
        for(int i =0; i<nums.size();i++){
            if(max <nums[i]+nums[nums.size()-1-i]) max = nums[i]+nums[nums.size()-1-i];
        }
        return max;
    }
};
