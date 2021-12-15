class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>res;
        map<string,int>m;
        for(int i =0; i<s1.size();i++){
            string tmp ="";
            while(1){
                if(s1[i]==' ' || i == s1.size()) break;
                tmp+=s1[i];
                i++;
            }
            // cout<< tmp <<endl;
            m[tmp]++;
            if(s1[i]==' ')continue;
        }
        for(int i =0; i<s2.size();i++){
            string tmp ="";
            while(1){
                if(s2[i]==' ' || i == s2.size()) break;
                tmp+=s2[i];
                i++;
                
            }
            //cout<< tmp <<endl;
            m[tmp]++;
            if(s2[i]==' ') continue;
        }
        for(auto x : m){
            //cout<< x.second<< " "<< x.first <<endl;
            if(x.second ==1)
                res.push_back(x.first);
        }
        return res;
    }
};
