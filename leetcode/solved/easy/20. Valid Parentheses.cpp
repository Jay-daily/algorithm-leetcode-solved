class Solution {
public:
    bool isValid(string s) {
        stack<char> stck;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]=='}' || s[i]==')' || s[i]==']'){
                stck.push(s[i]);
            }
            else if(stck.empty())
                return false;
            else{
                if( (s[i]=='{' && stck.top()=='}') ||
                  (s[i]=='(' && stck.top()==')') ||
                  (s[i]=='[' && stck.top()==']')
                  ){
                    stck.pop();
                }
                else
                    return false;
            }
        }
        if(stck.empty())
            return true;
        return false;
    }
};
