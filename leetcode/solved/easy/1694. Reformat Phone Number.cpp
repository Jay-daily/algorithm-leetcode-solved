class Solution {
public:
    string reformatNumber(string number) {
        if(number.size()<3)return number;
        string nb ="";
        for(auto n : number) if(isdigit(n)) nb+=n;
        string res="";
        int x = nb.size()%3;
        
        if(x==1){
            for(int i =0; i<nb.size();i++){
                res+=nb[i];
                if(i==nb.size()-3) {
                    res+='-';
                    res+=nb[++i];
                    res+=nb[++i];
                    return res;
                }
                if(i%3 ==2) res+='-';
            }
        }
        for(int i =0; i<nb.size();i++){
            res+=nb[i];
            if(i!= nb.size()-1 && i%3 ==2) res+='-';
            
        }
        return res;
    }
};
