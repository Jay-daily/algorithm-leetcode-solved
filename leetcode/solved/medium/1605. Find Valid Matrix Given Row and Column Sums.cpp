//got idea from
//https://leetcode.com/problems/find-valid-matrix-given-row-and-column-sums/discuss/887633/C%2B%2B-clean-code-and-easy-to-understand.

class Solution {
public:

    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        
        int m = rowSum.size();
        int n = colSum.size();
        
        vector<vector<int>>res(m,vector<int>(n));
        
        for(int i =0; i< m; i++){
            for(int j =0; j<n; j++){
                res[i][j] = min(rowSum[i],colSum[j]);
                rowSum[i] -= res[i][j];
                colSum[j] -= res[i][j];
            }
        }
        
        return res;
    }
};
