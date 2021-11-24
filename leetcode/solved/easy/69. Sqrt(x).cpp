class Solution {
public:
    int mySqrt(int x) {
        int res=0;
        for(long long i =0; ; i++){
            if(i*i==x) return i;
            else if(i*i>x) return i-1;
        }
        return -1;
    }
};
