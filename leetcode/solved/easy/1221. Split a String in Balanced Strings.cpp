class Solution {
public:
   int balancedStringSplit(string s) {
    int tmp =0;
    int res = 0;
    
    for (int i =0; i < s.size(); i++){
        if(s[i] == 'L')
            tmp++;
        if(s[i] == 'R')
            tmp--;
        if (tmp == 0)
            res++;
    }
    
    return res;        
}
};
