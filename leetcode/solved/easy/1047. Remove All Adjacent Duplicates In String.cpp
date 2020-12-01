class Solution {
public:
    string removeDuplicates(string S) {
        
        string res = "0";
        
        for(int i =0; i < S.size(); i++){
            if(S[i]==res.back())
                res.pop_back();
            else
                res.push_back(S[i]);
            
        }
        return res.substr(1);
        
    }
};
