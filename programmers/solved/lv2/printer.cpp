#include <string>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int solution(vector<int> priorities, int location) {
   int answer = 0;
    vector<int>& p = priorities;
    int& loc = location;


    while (1) {
        if (loc == 0) {
            for (int i = 1; i < p.size(); i++) {
                if (p[i] > p[0]) {
                    p.push_back(p[0]);
                    p.erase(p.begin());
                    loc = p.size() - 1;
                    break;
                }
                if (i == p.size() - 1) {
                    return ++answer;
                }
            }
        }

        else if (loc != 0) {
            for (int i = 1; i < p.size(); i++) {
                if (p[i] > p[0]) {
                    p.push_back(p[0]);
                    p.erase(p.begin());
                    loc--;
                    break;
                }
                if (i == p.size() - 1) {
                    p.erase(p.begin());
                    answer++;
                    loc--;
                }
            }
        }
            if(p.size()==1) return ++answer;
    }

    return answer;
}
