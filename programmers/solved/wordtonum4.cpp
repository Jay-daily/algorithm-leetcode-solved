#include <string>
#include <vector>
#include <regex>


using namespace std;

int solution(string s) {
    
    vector <string> find = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    for(int i =0; i< find.size();i++){
        s = regex_replace(s,regex(find[i]),to_string(i));
    }
    return stoi(s);
}
