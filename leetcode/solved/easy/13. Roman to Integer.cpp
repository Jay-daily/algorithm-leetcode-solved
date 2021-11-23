
//first solution
class Solution {
public:
    int romanToInt(string s) {
        int res=0;
        
        map<char,int>m;
        m['I']=1; m['V']=5; m['X']=10; m['L']=50; m['C']=100; m['D']=500; m['M']=1000;
        
        for(int i =0; i<s.size(); i++){
            res+=m[s[i]];
            if(i>0){
                if((s[i]=='V' || s[i]=='X') && s[i-1]=='I') res-=2*m[s[i-1]];
                else if((s[i]=='L' || s[i]=='C') && s[i-1]=='X') res-=2*m[s[i-1]];
                else if((s[i]=='D' || s[i]=='M') && s[i-1]=='C') res-=2*m[s[i-1]];
            }
        }
        return res;
    }
};

//second solution
class Solution {
public:
    int romanToInt(string s) {
        int res=0;
        for(int i =0; i<s.size(); i++){
            
            if(s[i]=='M') res+=1000;
            
            else if(s[i]=='D') res+=500;
            
            else if(s[i]=='C' && i!=s.size()-1){
                if(s[i+1]=='D') {res+=400; i++;}                        
                else if(s[i+1]=='M')  {res+=900; i++;}
                else res+=100;
            }
            
            else if(s[i]=='C') res+=100;
                    
            else if(s[i]=='L') res+=50;
            
            else if(s[i]=='X' && i !=s.size()-1){
                if(s[i+1]=='L') {res+=40; i++;}
                else if(s[i+1]=='C') {res+=90; i++;}
                else res+=10;
            }
            
            else if(s[i]=='X') res+=10;
                    
            else if(s[i]=='V') res+=5;
            
            else if(s[i]=='I' && i!=s.size()-1){
                if(s[i+1]=='V') {res+=4;i++;}
                else if(s[i+1]=='X') {res+=9;i++;}
                else res+=1;
            }
            
            else if(s[i]=='I') res+=1;
        }
        return res;
    }
};

