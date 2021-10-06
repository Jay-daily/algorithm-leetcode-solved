class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int len = l.size();
        vector<int>tmp;
        vector<bool>res;
        for(int i =0; i<len; i++){
            for(int j = l[i]; j<=r[i]; j++){
                tmp.push_back(nums[j]);
            }
            sort(tmp.begin(),tmp.end());
            int commondiff = tmp[1]-tmp[0];
            int flag =0;
            for(int j = 0; j<tmp.size()-1; j++){
                if(commondiff!= tmp[j+1]-tmp[j]){
                    flag =1;
                    res.push_back(false);
                    break;
                }
            }
            if (flag ==0) res.push_back(true);
            tmp.clear();
        }
        return res;
    }
};
