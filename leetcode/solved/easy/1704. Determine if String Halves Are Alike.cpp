class Solution {
public:
    bool halvesAreAlike(string s) {
        string x = "aeiouAEIOU";
        int a=0;
        int b=0;
        for(int i=0;i<s.size();i++){
            if(i<(s.size()/2)){
                for(int j =0;j<x.size();j++){
                    if(s[i]==x[j]) a++;
                }
            }
            else{
                for(int j =0;j<x.size();j++){
                    if(s[i]==x[j]) b++;
                }
            }
        }
        return a==b;
    }
};
