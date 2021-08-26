//unordered_map 사용법
//auto 사용법

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string,int>participant_map;
    
    for (string name : participant)
        participant_map[name]++;
    for (string name : completion)
        participant_map[name]--;
    for (auto pair : participant_map){
        if(pair.second >=1)
            answer = pair.first;
    }
    return answer;
}
