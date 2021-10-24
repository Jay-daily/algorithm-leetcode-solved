class Solution {
public:
    
    int movement(char a, char b){
        return abs(a-b) < 26-abs(a-b) ? abs(a-b) : 26-abs(a-b) ;
        
    }
    
    int minTimeToType(string word) {
        int res=0;
        char prev = 'a';
        
        for(int i =0; i<word.size(); i++){
            if(word[i]==prev){
                res++;
            }
            else{
                res+= movement(prev,word[i]);
                prev= word[i];
                res++;
            }
        }
        return res;
    }
};
