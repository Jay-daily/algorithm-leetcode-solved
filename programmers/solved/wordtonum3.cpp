#include <string>
#include <vector>
#include <regex>


using namespace std;

int solution(string s) {
    
    vector <string> find = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    vector <string> replace = {"0","1","2","3","4","5","6","7","8","9"};
    
    for(int i =0; i< find.size();i++){
        s = regex_replace(s,regex(find[i]),replace[i]);
    }
    return stoi(s);
}
