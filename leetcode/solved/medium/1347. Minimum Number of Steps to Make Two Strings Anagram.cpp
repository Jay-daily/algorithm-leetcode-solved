class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>m;
        map<char,int>m2;
        int res=0;
        for(int i =0; i<s.size(); i++){
            m[s[i]]++;
            m2[t[i]]++;
        }
        for(auto it : m){
            //     // res += m[s[i]] - m2[s[i]];
            //     cout<<it.second << " ";
            // cout<< m2[it.first];
            //     // cout<<m2[s[i]] << " ";
            //     cout << endl;
           if(it.second>m2[it.first])
            res += (it.second - m2[it.first]);

        }
        return res;
    }
};
