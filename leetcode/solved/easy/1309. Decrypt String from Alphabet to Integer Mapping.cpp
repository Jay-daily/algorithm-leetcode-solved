class Solution {
public:
    string freqAlphabets(string s) {
        //1~9
        //10#~26#
        string res="";
        string tmp ="";
        for(int i =0; i<s.size();){
            
            if(i+2 <s.size() && s[i+2]=='#'){
                tmp+=s[i];
                tmp+=s[i+1];
                int x = stoi(tmp)-1;
                res += char('a'+ x);
                cout << char(x + 'a') <<" ";
                tmp ="";
                i+=3;
            }
            else{
                tmp =s[i];
                int x = stoi(tmp)-1;
                res += char('a'+ x);
                tmp = "";
                i++;
            }
        }
        return res;
    }
};
