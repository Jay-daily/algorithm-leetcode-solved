class Solution {
public:
    string reverseOnlyLetters(string S) {
        
        int start = 0;
        int end = S.size() - 1;
        
        while(start < end)
        {
            if(!isalpha(S[start]))
            {
                start++;
                continue;
            }
            
            if(!isalpha(S[end]))
            {
                end--;
                continue;
            }
            
            swap(S[start++], S[end--]);
        }
        return S;
    }
};
