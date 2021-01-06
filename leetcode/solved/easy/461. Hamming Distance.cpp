class Solution {
public:
    int hammingDistance(int x, int y) {
     
      int c=0;
      int n= x^y;
        while(n)
        {
            n&=(n-1);
            c++;
        }
        return c;
    }
};
