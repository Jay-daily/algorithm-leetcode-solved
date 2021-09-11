#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <map>
using namespace std;


bool cmp(int a, int b) {

    string x = to_string(a);
    string y = to_string(b);

    return x+y > y+x;
}


string solution(vector<int> numbers) {
    string answer = "";
    sort(numbers.begin(), numbers.end(), cmp);
    for (int i = 0; i < numbers.size(); i++) {
        answer += to_string(numbers[i]);
    }
    if (answer[0]=='0') return "0";
    return answer;
}
