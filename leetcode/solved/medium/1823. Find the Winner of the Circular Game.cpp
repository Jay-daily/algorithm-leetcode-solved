class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>v;
        for(int i =0; i<n;i++) v.push_back(i+1);
        int len = v.size();
        for(int i =0; v.size()>1;){
            i += (k-1);
            i = i %v.size();
            v.erase(v.begin()+i);

        }
        return v[0];
    }
};
