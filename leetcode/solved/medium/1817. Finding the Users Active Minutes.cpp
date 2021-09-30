class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        
        vector<int>res(k);
        sort(logs.begin(),logs.end());
        set<int>s;
        
        int stand = logs[0][0];
        for (int i = 0; i < logs.size(); i++) {
            if (logs[i][0] != stand) {
                ++res[s.size() - 1];
                stand = logs[i][0];
                s.clear();
                s.insert(logs[i][1]);
            }
            else s.insert(logs[i][1]);
            if(i ==logs.size()-1) ++res[s.size() - 1];
        }
        
        return res;
    }
};
