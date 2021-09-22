class Solution {
public:
    int xorOperation(int n, int start) {
        int res = 0;
        int num = 0;
        for(int i = 0; i < n; i++){
            num = start + 2*i;
            res = res ^ num;
        }
        return res;
    }
};
