class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==1) return 1;
        int max =0;
        for(int i =0; i<s.size();i++){
            map<char,int>m;
            int cnt =0;
            for(int j =i; j<s.size(); j++){
                cnt++;
                if(++m[s[j]] ==2){
                    cnt--;
                    if(cnt>max) max = cnt;
                    break;
                }
                if(j==s.size()-1){
                    if(cnt>max) max = cnt;
                }
            }
        }
        return max;
    }
};
