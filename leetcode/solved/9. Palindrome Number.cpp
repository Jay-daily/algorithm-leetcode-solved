class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x<0)return false;
    
        string left ="";
        string right ="";
        string xx = to_string(x);
        
        if(xx[0] =='-') return false;
        
        for(int i =0; i<xx.size()/2; i++) left+=xx[i];
        
        if(xx.size()%2==0) for(int i =xx.size()-1; i>= xx.size()/2; i--) right+=xx[i];

        else for(int i =xx.size()-1; i> xx.size()/2; i--) right+=xx[i];

        return left==right;
    }
};
