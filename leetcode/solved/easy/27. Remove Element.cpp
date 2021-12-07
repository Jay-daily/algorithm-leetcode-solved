class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0)return 0;
        
        int cnt=0;
        int i = 0;
        while(1){
            cnt++;
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
                i--;
                cnt--;
            }
            if(i == nums.size()-1) break;
            
            i++;
        }
        return cnt;
    }
};
