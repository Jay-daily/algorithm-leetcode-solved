class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int>m;
        for(int i =0; i<edges.size();i++){
            m[edges[i][0]]++;
            m[edges[i][1]]++;
        }
        int max = 0;
        int maxIdx = 0;
        for(auto it = m.cbegin(); it != m.cend(); it++ ) {
            if (it->second > max) {
                maxIdx = it->first;
                max = it->second;
            }
        }
        return maxIdx;
    }
};
