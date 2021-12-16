class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        map<string,vector<string>>m;
        
        for(auto &s : strs) {
            string tmp = s;
            sort(tmp.begin(),tmp.end());
            m[tmp].push_back(s);
        }
        for(auto sub : m) {
            //cout<< s << endl;
            res.push_back(sub.second);
        }
        return res;
    }
};
