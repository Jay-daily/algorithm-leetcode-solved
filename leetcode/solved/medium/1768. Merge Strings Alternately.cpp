class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1 = word1.size();
        int len2 = word2.size();
        int len = min(len1,len2);
        
        string res = "";
        for(int i =0; i < len; i++){
            res += word1[i];
            res += word2[i];
        }
        if(len1>len2) res += word1.substr(len,len1-len);
        else res += word2.substr(len,len2-len);
        return res;
    }
};
