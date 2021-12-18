class Solution {
public:
    vector<int> fairCandySwap(vector<int>& a, vector<int>& b) {
        vector<int>res;
        int asum = 0, bsum =0;
        for(auto s : a) asum+=s;
        for(auto s : b) bsum+=s;
        //cout<< diff <<endl;
        for(auto x : a){
            for(auto y : b){
                //cout<< 2*(y-x) <<endl;
                if( 2*(y-x) == bsum - asum ){
                    res.push_back(x);
                    res.push_back(y);
                    return res;
                }
            }
        }
        return res;
    }
};
