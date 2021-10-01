class Solution {
public:
    string reversePrefix(string word, char ch) {
        string tmp="";
        string tmp2="";
        int idx=0;
        for(int i =0; i<word.size();i++){
            if(word[i]==ch) {idx = i; break;} 
        }
        tmp = word.substr(0,idx+1);
        reverse(tmp.begin(),tmp.end());
        tmp2 = word.substr(idx+1,word.size()-1);
        
        return tmp+tmp2;
    }
};
