class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {

        
////runtime 32ms :faster than 7%
////memory usage 14.3mb : less than 7%        
//         int res =0;
//         unordered_set<char>s;
//         int prev =0; int later =0;
//         for(int i =0; i<text.size(); i++){
//             s.insert(text[i]);
//             if(text[i]== ' ' || i==text.size()-1) {
//                 prev = s.size();

//                 for(int j =0; j<brokenLetters.size(); j++){
//                     s.insert(brokenLetters[j]);
//                 }
                
//                 later = s.size();

//                 if(prev + brokenLetters.size()==later ) res++;
                
//                 s.clear();
//                 prev=0;
//                 later =0;                
//             }
            
//         }
//         return res;
        
        
        
        
        //runtime 4ms :faster than 71.09%
        //memory usage 6.6mb : less than 84.47%
        int check[256] = {0,};
        int res = 1;
        int flag =0;
        for(int i =0; i<brokenLetters.size(); i++){
            check[brokenLetters[i]]++;
        }
        
        for(int i =0; i<text.size(); i++){
            if(text[i]==' '){
                res++;
                flag =0;   
            }
            
            if(check[text[i]]==1 && flag ==0) {
                res--;
                flag = 1;
            }
        }
        return res;
    }
};
