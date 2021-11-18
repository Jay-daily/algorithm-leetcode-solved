class Solution {
public:
    int countGoodSubstrings(string s) {
        int res =0;
        if(s.size()<3)return res;
        for(int i =0; i<s.size()-2; i++){
            res++;
            map<char,int>m;
            m[s[i]]++;m[s[i+1]]++;m[s[i+2]]++;
            for(auto it : m) if(it.second!=1) res--;
        }
        return res;
    }
};
