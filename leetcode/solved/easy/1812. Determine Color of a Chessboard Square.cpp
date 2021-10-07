class Solution {
public:
    bool squareIsWhite(string coordinates) {
        string& s = coordinates;
        if((s[0]%2==0 &&s[1]%2==0) || s[0]%2==1&&s[1]%2==1) return false;
        return true;
    }
};


//better solution
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        return coordinates[0]%2 != coordinates[1]%2;
    }
};
