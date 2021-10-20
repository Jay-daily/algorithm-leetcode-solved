class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        vector<string>res;
        map<string,int>m;
        for(int i =0; i<cpdomains.size(); i++){
            string numStr = "";
            for(int j =0; j<cpdomains[i].size(); j++){
                if(isdigit(cpdomains[i][j])){
                    numStr+= cpdomains[i][j];
                }
                else break;
            }
            int numStrToInt = stoi(numStr);
            
            string domainTmp = "";
            for(int k = cpdomains[i].size(); k--;){
                if(cpdomains[i][k] == '.' || cpdomains[i][k] == ' ' ){
                    if(m.count(domainTmp)) m.find(domainTmp)->second += numStrToInt;
                    else{
                        m.insert(make_pair(domainTmp, numStrToInt));
                    }
                }
                domainTmp = cpdomains[i][k] + domainTmp;
                if(isdigit(cpdomains[i][k])) break;
            }
        }
        
        for (auto &it : m){
            string tmp = "";
            tmp = to_string(it.second) + " " + it.first;
            res.push_back(tmp);
        }
        return res;
    }
};
