class Solution {
public:
    int maxScore(string s) {
        int max = 0;
        int count =0;
        for(int i =1; i < s.size(); i++){
            for(int j = 0; j < i; j++){
                if( s[j] == '0')
                    count++;
                }
            for(int k  = i; k < s.size(); k++){
                if(s[k]=='1')
                    count++;
                }
            if (count >max)
                max = count;
            count =0;
        }
        return max;
        
    }
};
