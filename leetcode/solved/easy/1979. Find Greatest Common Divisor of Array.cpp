class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int b = nums[0];
        int a = nums[nums.size()-1];
        
        while(b>0){
            int tmp = a;
            a = b;
            if(tmp%b==0) break;
            b = tmp%b;
        }
        return b;
    }
};
