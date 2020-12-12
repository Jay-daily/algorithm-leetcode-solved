class Solution {
public:
    string reverseWords(string s) {
        
        
        string tmp = "";
        string x;
        
        for(int i =0; i<s.size(); i++){
            if(s[i] != ' '){
                tmp += s[i];
                if(i == s.size()-1){
                    reverse(tmp.begin(),tmp.end());
                    x += tmp;
                }
            }
            else if (s[i] == ' ')
            {
                reverse(tmp.begin(),tmp.end());
                x += tmp;
                x += ' ';
                tmp = "";
            }   
        }
        return x;
    }        
};
