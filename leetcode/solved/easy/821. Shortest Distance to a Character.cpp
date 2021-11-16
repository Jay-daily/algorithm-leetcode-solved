class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>res;
        for(int i =0; i< s.size(); i++){
            int righttmp=-1;
            int lefttmp=-1;
            
            int ruse=0;
            for(int j = i; j<s.size(); j++){
                righttmp++;
                if(s[j]==c){
                    ruse =1;
                    break;
                }
            }
            int luse =0;
            for(int k = i; k>=0; k--){
                lefttmp++;
                if(s[k]==c){
                    luse =1;
                    break;
                }
            }
            if(luse == 0) lefttmp = INT_MAX;
            if(ruse == 0) righttmp = INT_MAX;
            res.push_back(min(righttmp,lefttmp));
        }
        return res;
    }
};
