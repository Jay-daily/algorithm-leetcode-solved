class Solution {
public:
    string removeOuterParentheses(string s) {
        int check = 0;
        string res ="";
        for(char c : s){
            if(c == '('){
                //cout <<check << endl;
                if(check++) res +='(';
            }
            else if(c ==')'){
                if(--check) res+=')';
                //cout <<check << endl;
            }
            
        }
        
        return res;
    }
};

