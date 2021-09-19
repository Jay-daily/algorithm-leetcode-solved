class Solution {
public:
    int res = 0;
    int finalValueAfterOperations(vector<string>& operations) {
        for(auto s : operations){
            if(s=="++X" || s== "X++") res++;
            else if ("--X" || "X--") res--;
        }
        return res;
    }
};
