//get idea from
//https://leetcode.com/problems/partition-labels/discuss/113293/C%2B%2B-6-lines-O(n)-or-O(1)-two-simple-passes

class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>res;
        vector<int>last(26,0);
        
        for(int i =0; i<s.size();i++){
            last[s[i]-'a'] = i;
        }
        
        int maxidx =-1; int start = 0;
        for(int i =0; i<s.size();i++){
            maxidx = max(maxidx,last[s[i]-'a']);
            if(maxidx ==i){
                res.push_back(maxidx-start+1);
                start = i +1;
            }
        }
        return res;
    }
};
