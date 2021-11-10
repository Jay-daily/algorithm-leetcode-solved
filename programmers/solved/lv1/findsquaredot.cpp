#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<vector<int> > v) {
    vector<int> ans;

    int tmp = v[0][0];
    int tmp2 = v[0][1];

    if(v[0][0] != v[1][0]) tmp += (v[1][0] - v[2][0]);
    else tmp += (-v[1][0] + v[2][0]);
        
    if(v[0][1] != v[1][1]) tmp2 += (v[1][1] - v[2][1]);
    else tmp2 += (-v[1][1] + v[2][1]);

    ans.push_back(tmp);
    ans.push_back(tmp2);

    return ans;
}
