class Solution {
public:
    int maxDepth(string s) {
        int tmp = 0;
        int max = 0;
        for (int i =0; i < s.size(); i++){
            if (s[i] == '(')
            {
                tmp++;
                if(tmp > max)
                    max = tmp;
            }
            else if (s[i] == ')')
                tmp--;
        }
        return max;
    }
};
