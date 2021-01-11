#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    int min = 2000000000;
    int minidx =0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] < min)
        {
            min = arr[i];
            minidx = i;   
        }
    }
    
    for(int i = 0; i < arr.size(); i++){
        if (arr[i] == min)
            continue;
        answer.push_back(arr[i]);
    }
    if(answer.size()==0)
        answer.push_back(-1);
    return answer;
}
