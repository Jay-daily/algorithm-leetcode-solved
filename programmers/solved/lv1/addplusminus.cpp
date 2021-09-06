#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;
    char sign =0;
    for(int i =0; i< signs.size();i++){
        if(signs[i]==true)
            sign = 1;
        else
            sign = -1;
        answer = answer + absolutes[i] *sign;
    }
    return answer;
}
