class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count =0;
        for( int p =0; p< words.size(); p++){
            for(int q =0; q<allowed.size(); q++){
                for(int r =0; r<words[p].size(); r++){
                    if(words[p][r] == allowed[q])
                        words[p][r] = '0';
                }
            }
            int tmp =0;
            for(int i = 0; i < words[p].size(); i++)
            {
                if (words[p][i] == '0')
                    tmp++;
            }
            if (tmp == words[p].size())
                count++;
        }
            return count;
    }
};
