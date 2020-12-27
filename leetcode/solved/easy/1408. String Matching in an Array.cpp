class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> res;
        for(int i = 0; i < words.size(); i++){
            for(int j = 0; j < words.size(); j++){
                if(i != j && words[i].find(words[j]) != -1)
                {
                    res.push_back(words[j]);
                    words[j] = "xxx";   
                }
            }

        }

    return res;   
    }
        
};
