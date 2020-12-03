class Solution {
public:
    int majorityElement(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int count =0;
        for (int i =0; i<nums.size()-1; i++){
            if (nums[i]==nums[i+1])
            {
                count++;
                if(count+1 > nums.size()/2)
                    return nums[i];
            }
            else
            {
                count =0;
                continue;
            }
                    
        }
        return nums[0];
    }
};
