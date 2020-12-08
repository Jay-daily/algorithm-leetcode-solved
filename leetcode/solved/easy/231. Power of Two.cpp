class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)
            return true;
        
        else if(n==0)
            return false;
        
        else
        {
            while(n!=1)
            {
                if (n%2 == 0)
                {
                    n /= 2;
                    if(n==1)
                        return true;
                }
                else
                    return false;
            }
        }
        return true;
    }
};
