class Solution {
public:
    string helper(string s){
        map<char,int>m;
        string t;
        for(int i =0; i<s.size();i++){
            if(m.count(s[i])==0) { 
                m[s[i]] = i;
                t += to_string(i);
            }
            else{
                t +=to_string(m[s[i]]);
            }
        }
        return t;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>res;
        
        for(int i =0; i<words.size(); i++){
            if(helper(pattern)==helper(words[i])) res.push_back(words[i]);
        }
        
        return res;
    }
};
