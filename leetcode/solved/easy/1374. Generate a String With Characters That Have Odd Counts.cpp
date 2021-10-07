class Solution {
public:
    string generateTheString(int n) {
        string res ="";
        if(n%2==1){
            for(int i =0; i<n; i++){
             res += "a";
            }
        }
        else{
            res += "a";
            for(int i =1; i<n; i++){
             res += "b";
            }
        }
        
       return res;
    }
};
