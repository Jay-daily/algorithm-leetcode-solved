class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int>res;
        int len = nums.size();
        int x = pow(2,maximumBit)-1;
        int tmp=0;
        for(int i =0; i< len; i++){
            tmp = tmp^nums[i];
            res.push_back(tmp ^ x);
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};
