class Solution {
public:
    bool checkIfPangram(string sentence) {
        int check[26] = {0,};
        for(char k : sentence){
            check[k - 'a']++;
        }
        for(char x : check){
            if (x ==0)
                return false;
        }
        return true;

        
    }
};
