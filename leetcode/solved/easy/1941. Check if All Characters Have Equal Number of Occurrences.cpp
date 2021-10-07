class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int check[26]={0,};
        for(int i =0; i<s.size();i++){
            check[s[i]-'a']++;
        }

        int flag =0;
        int tmp = 0;
        for(int i =0; i<26;i++){
            if(flag ==0 && check[i]!=0){
                tmp =check[i];
                flag =1;
            }
            if(flag ==1 && check[i]!=tmp && check[i]!=0){
                return false;
            }
        }
        return true;
    }
};
