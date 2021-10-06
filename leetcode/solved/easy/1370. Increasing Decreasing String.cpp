class Solution {
public:
    string sortString(string s) {
        string res="";
        sort(s.begin(),s.end());
        
        int savechar[26] ={0,};
        for(int i =0; i<s.size(); i++){
            savechar[s[i]-'a']++;
        }
        
        int cnt =0;
        while(1){
            cnt = 0;
            for(int i =0; i<26; i++){
                if(savechar[i]!=0){
                    savechar[i]--;
                    char c = i+'a';
                    string t(1,c);
                    res += t;
                    cnt++;
                }
            }
            if(cnt==0) return res;
            cnt =0;
            for(int i =25; i>=0; i--){
                if(savechar[i]!=0){
                    savechar[i]--;
                    char c = i+'a';
                    string t(1,c);
                    res += t;
                    cnt++;
                }
            } 
            if(cnt==0) return res;
        }
        return res;
    }
};
