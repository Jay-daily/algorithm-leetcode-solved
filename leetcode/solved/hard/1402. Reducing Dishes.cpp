class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int res =0;
        vector<int>&s = satisfaction;
        sort(s.begin(),s.end(),greater<>());
        
        int start = 1;
        int biggest = 0;
        while(1){
            int tmp =0;
            int coef = start;
            for(int i =0; i< start; i++){
                tmp += (s[i]*coef--);
            }
            if(tmp > biggest) biggest = tmp;
            else return biggest;
            start++;
            if(start==s.size()+1) return biggest;
        }
        return 1;
    }
};
