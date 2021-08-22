#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector <int> container;
    int temp =0;
    //기계가 가는 번호를 하나씩 추출
    for(int m = 0; m<moves.size(); m++){
        //행 loop 돌며 기계가 가는 번호에 0이 아닌 값이 있는지 검토
        for(int i = 0; i<board.size(); i++){
            //0이 아니면 temp에 뽑은 뒤, 그 자리에 0넣기
            if(board[i][moves[m]-1] != 0){
                temp = board[i][moves[m]-1];
                board[i][moves[m]-1] = 0;
                if(container.empty())
                    container.push_back(temp);
                else{                        
                    if(container.back()==temp){
                        answer+=2;
                        container.pop_back();
                    }
                    else
                        container.push_back(temp);
                }
                break;
            }
        }
    
    }              
    return answer;
}
