class Solution {
public:
    bool isHappy(long long n) {
        int sum =0;
        long long maxn =0;
        int cnt =0;
        while(1){
            cnt++;
            while(n!=0){
                sum += pow(n%10,2);
                n/=10;
            }
            n = sum;
            sum =0;
            if(n==maxn) return false;
            if(n==1) break;
            if(cnt>5 && n>maxn) maxn = max(n,maxn);
        }
        return true;
    }
};
