#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int multiple =0;
    int cnt =0;
    for(int i =0; i < progresses.size();)
    {
        cnt =0;
        while(progresses[i] + (speeds[i] * multiple) < 100)
            multiple++;
        
        while(progresses[i] + (speeds[i] * multiple) >= 100)
        {
            cnt++;
            i++;   
            if (i == progresses.size())
                break;
        }
      
        answer.push_back(cnt);
    }

    return answer;
}
