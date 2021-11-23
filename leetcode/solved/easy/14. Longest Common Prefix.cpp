class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1)return strs[0];
        string res="";
        sort(strs.begin(),strs.end(),[](string &a, string &b){
            return a.size() < b.size();
        });
        
        int k = 0;
        while(k<strs[0].size()){
            for(int i =1; i<strs.size(); i++){
                if(strs[0][k] != strs[i][k]) return res;
                else{
                    if(i==strs.size()-1) res+= strs[0][k];
                }
            }
            k++;
        }
        
        return res;
    }
};
