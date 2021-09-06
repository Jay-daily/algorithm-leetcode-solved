#include <string>
#include <vector>

using namespace std;

string solution(vector<string> table, vector<string> languages, vector<int> preference) {
    string answer = "";
    vector<string>temp;

    int baseScore = 6;
    int intermSum = 0;
    int highScore = 0;

    for (int i = 0; i < table.size(); i++) {
        string word = "";
        for (int p = 0; p < table[i].size(); p++) {
            if (table[i][p] != ' ') {
                word += table[i][p];
                if (p == table[i].size() - 1)
                    temp.push_back(word);
            }
            else {
                temp.push_back(word);
                word = "";
                continue;
            }
        }
        intermSum = 0;
        for (int j = 0; j < languages.size(); j++) {
            for (int q = 0; q < temp.size(); q++) {
                if (temp[q] == languages[j]) {
                    baseScore -= q;
                    break;
                }
                else if (q == temp.size() - 1)
                    baseScore = 0;
            }
            intermSum += baseScore * preference[j];
            baseScore = 6;
        }
        if (intermSum > highScore) {
            highScore = intermSum;
            answer = temp[0];
        }
        else if (intermSum == highScore) {
            if (answer > temp[0])
                answer = temp[0];
        }
        temp.clear();
    }
     
    return answer;
}
