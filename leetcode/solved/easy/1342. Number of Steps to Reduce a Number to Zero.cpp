class Solution {
public:
    int numberOfSteps (int num) {
        int cnt =0;
        while(1)
        {
            
            if(num == 0)
                break;
            
            if(num %2 ==0)
                num /= 2;
            
            else if(num%2 ==1)
                num -= 1;
            
            cnt++;
        }
        return cnt;
    }
};
