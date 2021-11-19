class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int check[26]={0,};
        for(int i =0; i<word1.size(); i++){
            check[word1[i]-'a']++;
            check[word2[i]-'a']--;
        }
        for(int i =0; i<26;i++){
            if(abs(check[i])>3) return false;
        }
        return true;

    }
};
