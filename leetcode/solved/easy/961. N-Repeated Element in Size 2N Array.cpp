class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size()/2;
        sort(nums.begin(),nums.end());
        int tmp = nums[0];
        int cnt = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==tmp){
                cnt++;
            }
            else{
                tmp = nums[i];
                cnt = 0;
                cnt++;
            }
            if(cnt==n) return nums[i];
        }
        
        return -1;
    }
};
