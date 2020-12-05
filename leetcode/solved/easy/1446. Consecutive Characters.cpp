class Solution {
public:
    int maxPower(string s) {
        int count = 1;
        vector<int> num;
        
        int res=1;
        if (s.size() ==1){
            return res;
        }
        else{
            for (int i =1; i<s.size(); i++){
                if(s[i] == s[i-1]){
                    count++;
                    if(i==s.size()-1)
                    num.push_back(count);
                }
                else if(s[i] != s[i-1]){
                    num.push_back(count);
                    count = 1;
                }
            }

            for (int i = 0; i < num.size(); i++){
                if(num[i]>res){
                    res = num[i];
                }
            }     
        }
         
        return res;
    }
};
