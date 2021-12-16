class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>res;
        vector<int>arr1 = arr;
        map<int,int>m;
        sort(arr1.begin(),arr1.end());
        int i =0;
        for(auto a : arr1) if(!m[a]) m[a] = ++i;        
        for(auto a : arr) res.push_back(m[a]);
        return res;
    }
};
