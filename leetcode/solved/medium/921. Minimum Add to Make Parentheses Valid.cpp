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
