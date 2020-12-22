class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int res = 0;
        int tmp = 0;
        for(int i =0; i < nums.size(); i++){
            if (nums[i] ==1)
            {
                ++tmp;
                if( i == nums.size()-1)
                {
                    if(tmp>res)
                        res = tmp;
                }
            }    
            

            
            if (nums[i] ==0)
            {                
                if(tmp>res)
                    res = tmp;
                tmp =0;
            }
        }
        return res;
    }
};
