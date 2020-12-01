class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int x =1;
        vector<string> k;
        
        for (int i =0; i < target.size(); i++){
            if (x == target[i])
            {
                k.push_back("Push");
                x++;
            }
            else if (x != target[i])
            {
                k.push_back("Push");
                k.push_back("Pop");
                x++;
                i--;
            }
        }
        return k;
    }
};
