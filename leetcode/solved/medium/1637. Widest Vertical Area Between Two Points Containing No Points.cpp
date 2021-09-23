class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int>v;
        for(int i=0; i<points.size(); i++){
            v.push_back(points[i][0]);
        }
        sort(v.begin(),v.end());
        vector<int>vv;
        for(int i =0; i<v.size()-1;i++){
            vv.push_back(v[i+1]-v[i]);
        }
        sort(vv.begin(),vv.end());
        return vv[vv.size()-1];
    }
};
