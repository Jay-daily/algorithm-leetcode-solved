class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>res;
        int check[26] = {0,};
        
        for(int j =0; j<words[0].size(); j++){
                check[words[0][j]-'a']++;
        }
        
        for(int i =1; i<words.size(); i++){
            int tmp[26]={0,};
            for(int j =0; j<words[i].size(); j++){
                tmp[words[i][j]-'a']++;
            }
            for(int k = 0; k<26; k++){
                if(check[k]==0 || tmp[k]==0){
                   check[k]=0;
                }
                else{
                    check[k] = min(check[k],tmp[k]);
                }
            }
        }
        
        for(int k =0; k<26; k++){
            for(int i =0; i<check[k]; i++){
                string x = "";
                x += char('a'+k);
                res.push_back(x);
            }
        }
        
        return res;
    }
};
