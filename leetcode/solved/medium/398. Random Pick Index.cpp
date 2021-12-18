class Solution {
public:
    
    vector<int>ns;
    Solution(vector<int>& nums) {
        ns = nums;
    }
    
    int pick(int target) {
        vector<int>tmp;
        for(int i =0; i<ns.size(); i++){
            if(ns[i]==target) tmp.push_back(i);
        }
        int res = rand()%tmp.size();
        return tmp[res];
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */
