class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows==1) return s;
        vector<vector<char>>v(numRows);
        
        int i = 0;
        int flag =0;
        for(auto letter : s){
            // cout<< i << " ";
            v[i].push_back(letter);
            if(flag ==0) i++;
            else i--;
            
            if(i==0) flag=0;
            if(i==numRows-1) flag=1;
        }
        string res="";
        for(auto ele : v){
            for(auto letter : ele) res+= letter; 
        }
        return res;
    }
};
