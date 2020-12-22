class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
     
        if(nums.size()*nums[0].size()!= r*c)
            return nums;
        
        vector <int> tmp;
        for (int i =0; i < nums.size();i++){
            for(int j = 0; j < nums[i].size(); j++)
                tmp.push_back(nums[i][j]);
        }
        
        vector<vector <int>> res;
        int k=0;
        for (int i =0; i< r; i++){
            vector <int> v;
            res.push_back(v);
            for (int j =0; j<c; j++){
                res[i].push_back(tmp[k++]);
            }
        }
        return res;
    }
};
