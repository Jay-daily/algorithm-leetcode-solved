class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int check[26]={};
        
        int res =0;
        
        for(auto &c : chars) check[c-'a']++;
        
        for(auto &word : words){
            bool flag =0;
            int check1[26]={};
            for(auto &c : word){
                if(++check1[c-'a'] > check[c-'a']){
                    flag = 1;
                    break;
                }
            }
            if (flag==0) res+=word.size();
        }
        return res;
    }
};
