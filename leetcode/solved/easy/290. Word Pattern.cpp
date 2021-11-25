//runtime 0ms, memory 6.2mb
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        //if pattern size ==1, there is no more to compare. so return ture.
        if (pattern.size()==1) return true;
        char c ='a';
        int j=0;
        string pattern2 = "";
        map<string,char>m;
        for(int i =0; i<s.size();i++){
            string tmp ="";
            
            while(1){
                if(s[i] == ' ') break;
                else if(i==s.size()-1){
                    tmp+=s[i];
                    break;
                }
                tmp+= s[i];
                i++;
            }
            if(m.find(tmp)==m.end()) m[tmp] = c++;
            pattern2 += m[tmp];
            if(i==s.size()) break;
        }
        
        //if pattern sizes don't match each other, because of its imbalance, return false.
        if(pattern.size()!= pattern2.size()) return false;
        
        
        //check they have same pattern through loop.
        for(int i=0; i<pattern.size(); i++){
            for(int j =0; j<pattern.size(); j++){
                // cout<< pattern[j]-pattern[i] << " " << pattern2[j]-pattern2[i] <<endl;
                if(pattern[j]-pattern[i]==0 && pattern2[j]-pattern2[i]!=0) return false;
                if(pattern2[j]-pattern2[i]==0 && pattern[j]-pattern[i]!=0) return false;
            }
        }
        // cout<< endl<<pattern << " " <<pattern2;
        return true;
    }
};
