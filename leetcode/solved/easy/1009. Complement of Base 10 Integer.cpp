class Solution {
public:
    int bitwiseComplement(int N) {
       
        vector <int>tmp;
        
        if (N == 0)
            return 1;
        else if (N ==1)
            return 0;
        
        while(1){
            
            tmp.push_back(N % 2);
            N = N/2;
            if(N==1)
            {
                tmp.push_back(1);
                break;
            } 
       
        }
        
        int res = 0;
        int two = 1;

        for (int i = 0; i < tmp.size(); i++) {
            if (tmp[i] == 1)
                tmp[i] = 0;
            else if (tmp[i] == 0)
                tmp[i] = 1;
            two *= 2;
        }
        two /= 2;
        for (int i = tmp.size() - 1; i >= 0; i--) {
            res += tmp[i] * two;
            two /= 2;

        }
        return res;
    }
    
};
