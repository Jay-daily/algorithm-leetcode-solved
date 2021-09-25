class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int>p;
        for(int i =0; i<m;i++) p.push_back(i+1);
        vector<int>&q = queries;
        vector<int>res;

        for(int i =0; i<q.size();i++){
            for(int j =0; j<p.size();j++){
                int tmp;
                if(q[i]==p[j]){
                    tmp = p[j];
                    p.erase(p.begin()+j);
                    p.insert(p.begin(),tmp);
                    res.push_back(j);
                    break;
                }
            }
        }
        return res;
    }
};
