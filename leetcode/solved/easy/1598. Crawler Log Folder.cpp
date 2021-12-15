class Solution {
public:
    int minOperations(vector<string>& logs) {
        int res =0;
        for(auto l : logs){
            if (l.find("..") != std::string::npos) {
                if(res!=0) res--;
            }
            else if(l.find(".") == std::string::npos){
                res++;
            }
        }
        return res;
    }
};
