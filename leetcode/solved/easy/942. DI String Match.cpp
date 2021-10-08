class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>res;
        int max = s.size();
        int min = 0;
        for(int i =0; i<s.size();i++){
            if(s[i]=='I') res.push_back(min++);
            else res.push_back(max--);
        }
        res.push_back(min++);
        return res;
    }
};
