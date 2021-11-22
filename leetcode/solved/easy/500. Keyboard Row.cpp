class Solution {
public:
    vector<string>res;
        
    void check(string &s1, string &s2){
        int cnt =0;
        for(int j =0; j<s1.size(); j++){
            for(int k =0; k<s2.size(); k++){
                if(tolower(s1[j])==s2[k]) cnt++;
            }
        }
        if (cnt==s1.size()) res.push_back(s1);
        return;
    }
    
    vector<string> findWords(vector<string>& words) {
        string a ="qwertyuiop";
        string b ="asdfghjkl";
        string c ="zxcvbnm";
        for(int i =0; i<words.size(); i++){
            check(words[i],a);
            check(words[i],b);
            check(words[i],c);
        }
        return res;
    }
};
