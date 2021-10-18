class Solution {
public:
    bool areNumbersAscending(string s) {
        bool res = true;
        string tmp = "";
        int min = -1;
        for(int i =0; i<s.size(); i++){
            while(isdigit(s[i])){
                tmp += s[i];
                i++;
            }
            if(tmp!=""){
                int tmpInt = stoi(tmp);
                if(tmpInt > min){
                    min = tmpInt;
                    tmp = "";
                }else{
                    return false;
                }
            }
        }
        return res;
    }
};
