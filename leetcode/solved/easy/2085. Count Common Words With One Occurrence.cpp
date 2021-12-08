class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int cnt=0;
        map<string,int>m;
        
        for(auto &key : words1) m[key]++;
        for(auto &key : words2) if(m[key] <2) m[key]--;
        
        for(auto &it : m) if(it.second==0) cnt++;
        
        return cnt;
    }
};
