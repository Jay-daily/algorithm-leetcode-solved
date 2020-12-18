//solution1

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string res = "";
        
        for(int i = 0; i < s.size(); i++){
            res += 'x';
        }
        
        for(int i = 0; i < s.size(); i++){
            for(int j = 0 ; j<s.size(); j++){
                if(indices[j] == i)
                {
                    res[i] = s[j];
                }
            }
        }
        return res;
    }
};


//solution2

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string res = s;
     
        for(int i = 0; i < s.size(); i++){
            res[indices[i]] = s[i];
        }
        return res;
    }
};
