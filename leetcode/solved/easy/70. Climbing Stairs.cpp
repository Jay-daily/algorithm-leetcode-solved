class Solution {
public:
    int climbStairs(int n) {
        int a=1,b=1;
        int res=1;
        for (int i=2;i<=n;i++){
            res = a + b;
            a = b;
            b = res;
        }
        return res;
    }
};
