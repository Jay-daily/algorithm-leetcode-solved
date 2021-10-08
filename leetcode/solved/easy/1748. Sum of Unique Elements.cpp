class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        set<int>s;
        int res=0;
        
        int tmp = nums[0];
        int cnt=0;
        
        sort(nums.begin(),nums.end());
        
        for(int i = 0; i< nums.size(); i++){

            if(nums[i]==tmp){
                cnt++;
            }
            else{
                cnt = 0;
                tmp = nums[i];
                cnt++;
            }
            if (cnt>1) s.emplace(nums[i]);
        }
        
        for(int i = 0; i< nums.size(); i++){
            res+= nums[i];
            for(auto it : s){
                if(nums[i]==it){
                    res-= nums[i];
                    break;
                }
            }   
            
        }
        return res;
    }
};
