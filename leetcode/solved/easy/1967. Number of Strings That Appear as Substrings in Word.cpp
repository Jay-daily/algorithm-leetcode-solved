class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int res =0;
        for(int i =0; i< patterns.size();i++){
            if(patterns[i].size()>word.size()) continue;
            for(int j =0; j< word.size()-(patterns[i].size())+1; j++){
                if(patterns[i]==word.substr(j,patterns[i].size())){
                    res++;
                    break;
                }
            }
        }
        return res;
    }
};


//better solution
class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int res =0;
        for(int i =0; i< patterns.size();i++){
            if(word.find(patterns[i])!=-1)res++;
        }
        return res;
    }
};
