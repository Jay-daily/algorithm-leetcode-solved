class Solution {
public:
    
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>code ={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string>s;
        for(int i =0; i<words.size();i++){
            string tmp="";
            for(int j =0; j<words[i].size();j++){
                tmp += code[words[i][j]-'a'];
            }
            s.insert(tmp);
        }
        return s.size();
    }
};
