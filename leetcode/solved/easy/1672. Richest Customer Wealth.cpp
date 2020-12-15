class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max =0;
        int tmp = 0;
        for(int i =0; i< accounts.size(); i++){
            tmp =0;
            for(int j=0; j<accounts[i].size(); j++){
                tmp += accounts[i][j];
            }
            if(tmp > max)
                max = tmp;
        }
        return max;
    }
};
