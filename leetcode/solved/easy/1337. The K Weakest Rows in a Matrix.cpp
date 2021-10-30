class Solution {
public:
    map<int,int>m;
    vector<int>res;
    static bool cmpp(const pair<int,int>&a,const pair<int,int>&b){
        if(a.second == b.second) return a.first < b.first;
        return a.second < b.second;
    }
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        for(int i =0; i<mat.size();i++){
            int tmp =0;
            for(int j =0; j<mat[i].size(); j++){
                tmp += mat[i][j];
            }
            m.insert(make_pair(i,tmp));
        }
        vector<pair<int,int>>vec(m.begin(),m.end());
        
        sort(vec.begin(), vec.end(), cmpp);
        
        for(auto it : vec){
            res.push_back(it.first);
            if(--k == 0){
                break;
            }
        }
        return res;
    }
};
