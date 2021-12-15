class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string>s;
        vector<string>res;
        for(int i =0; i<text.size(); i++){
            string tmp ="";
            while(i!=text.size() && text[i]!=' '){
                tmp+= text[i++];
            }
            s.push_back(tmp);
        }
        
        for(int i =0; i<s.size()-2; i++){
            if(s[i]==first &&s[i+1]==second) res.push_back(s[i+2]);
        }
        return res;
    }
};
