class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>res;
        if(n%2==1)res.push_back(0);
        for(int i =0; i<n/2;i++){
            res.push_back(i+1);
            res.push_back(-i-1);
        }
        return res;
    }
};
