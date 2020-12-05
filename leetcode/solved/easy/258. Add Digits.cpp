class Solution {
public:
    int addDigits(int num) {
        
        long long res = 0;
        
        while(1){
            while(num != 0){
            res += num % 10;
            num /= 10;
            }
            if (res >= 10)
            {
                num = res;
                res = 0;   
            }
            else
                break;
        }
        return res;
    }
};
