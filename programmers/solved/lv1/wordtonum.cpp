#include <string>
#include <vector>


using namespace std;

int solution(string s) {
    
    string answer ="";
    
    for(int i =0; i< s.length();i++){
        //숫자
        if ((s[i] >='0') && (s[i] <='9')) answer += s[i]; 
        //zero
        else if (s[i]=='z'){answer += '0'; i += 3;}
        //one
        else if (s[i]=='o'){answer += '1'; i += 2;}
        
        else if (s[i]=='t'){
            //two
            if(s[i+1]=='w') {answer += '2'; i+=2;}
            //three
            else if(s[i+1]=='h'){answer += '3'; i+=4;}
        }
        else if (s[i]=='f'){
            //four
            if(s[i+1]=='o'){answer += '4';i+=3;}
            //five
            else if(s[i+1]=='i'){answer += '5';i+=3;}
        }
        else if (s[i]=='s'){
            //six
            if(s[i+1]=='i'){answer += '6';i+=2;}
            //seven
            else if(s[i+1]=='e'){answer +='7';i+=4;}
        }
        //eight
        else if (s[i]=='e'){answer += '8'; i+=4;}
        //nine
        else if (s[i]=='n'){answer += '9';i+=3;}
    }
    //string_to_int
    return stoi(answer);
}
