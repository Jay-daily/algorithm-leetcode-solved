class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        vector<vector<int>>res;
        int rowSize = mat.size();
        int colSize = mat[0].size();
        
        for(int i = 0; i < rowSize; i++){
            vector<int>tmp;
            for(int j =0; j< colSize; j++){
                int sum = 0;
                for(int p = max(0,i-k); p <= min(i+k,rowSize-1);p++){
                    for(int q = max(0,j-k); q<=min(j+k,colSize-1);q++){
                        sum+= mat[p][q];
                    }
                }
                tmp.push_back(sum);
            }
            res.push_back(tmp);
            tmp.clear();
        }
        return res;
    }
};
