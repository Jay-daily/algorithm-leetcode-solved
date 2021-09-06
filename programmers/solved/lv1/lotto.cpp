#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int>lottos, vector<int> win_nums) {
    vector<int> answer;
    int rank[7] = {6,6,5,4,3,2,1};
    char samecount =0;
    char zerocount =0;
    
     for(int i =0; i < lottos.size(); i++){
        if (lottos[i] == 0) zerocount++;
         for(int j =0; j < win_nums.size(); j++)
            if(lottos[i] == win_nums[j]) samecount++;
     }
    answer.push_back(rank[samecount+zerocount]);
    answer.push_back(rank[samecount]);
    
    return answer;
}
