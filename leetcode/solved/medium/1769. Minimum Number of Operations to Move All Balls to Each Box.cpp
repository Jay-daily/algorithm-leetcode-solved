class Solution {
public:
    
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> res(n);
        unordered_set<int> st;
        for (int i = 0; i < n; ++i) {
            if (boxes[i] == '1') st.insert(i);
        }
        for (int i = 0; i < n; ++i) {
            for (auto idx : st) {
                res[i] += abs(idx - i);
            }
        }
        return res;
    }
};
