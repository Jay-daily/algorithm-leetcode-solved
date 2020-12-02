class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> res;
        int result =0;
        for(int i=0; i<ops.size(); i++)
        {
            if(atoi(ops[i].c_str()) != NULL)
            {
                res.push_back(atoi(ops[i].c_str()));
            
            }
            else if(ops[i] == "C")
            {
                res.pop_back();
            }
            else if(ops[i] == "D")
            {
                res.push_back(res.back()*2);
            }
            else if(ops[i] == "+")
            {
                 res.push_back(res.back()+res[res.size()-2]);
                }
                    
        }
        for(int j =0; j<res.size(); j++)
            result += res[j];
    
        return result;
    }
};
