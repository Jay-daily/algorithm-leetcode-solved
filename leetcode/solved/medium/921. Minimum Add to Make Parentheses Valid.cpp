class Solution {
public:
    int minAddToMakeValid(string s) {
        string t = "()";
        while(s.find(t)!=-1){
            s.erase(s.find(t),2);
        }
        return s.size();
    }
};


//better solution
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>stk;
        for(int i=0; i<s.size();i++){
            if(s[i]=='(') stk.push(s[i]);
            else if(!stk.empty() && s[i]==')' && stk.top()=='(') stk.pop();
            else stk.push('x');
        }
        return stk.size();
    }
};
