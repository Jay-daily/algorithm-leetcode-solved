#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    //12345 - 5개
    //21232425 - 8개
    //3311224455 - 10개
    string a = {1,2,3,4,5};
    string b = {2,1,2,3,2,4,2,5};
    string c = {3,3,1,1,2,2,4,4,5,5};
    int res[3] = {0,};
    int max_record = 0;
    for(int i = 0; i< answers.size(); i++){
        if(a[i%5] == answers[i]) res[0]++;
        if(b[i%8] == answers[i]) res[1]++;
        if(c[i%10] == answers[i]) res[2]++;
    }
    max_record = max(max(res[0],res[1]),res[2]);
    for(int i =0; i< 3; i++){
        if(res[i] == max_record) answer.push_back(i+1);
    }
    
    return answer;
}
