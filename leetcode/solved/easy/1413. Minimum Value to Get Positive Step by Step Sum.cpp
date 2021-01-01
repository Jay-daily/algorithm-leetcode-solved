class Solution {
public:
    int minStartValue(vector<int>& nums) {
        
        int startvalue =0;
        while(1)
        {   
            startvalue++;
            int i = 0;
            int sum;
            sum = startvalue;
            while(1)
            {
                
                sum += nums[i++];

                if (sum < 1)
                {
                    break;
                }

                if(i == nums.size())
                {
                    return startvalue;
                }
       

            }
        }
        return 1;
    }
};
