class Solution {
public:

    
    int countBattleships(vector<vector<char>>& board) {
        int res = 0; 
        
        if(board.size()==1 && board[0].size()==1){
            return board[0][0] == 'X'? 1 : 0;
        }
        
        else if(board.size()==1){
            for(int i =0; i< board[0].size(); i++){
                if(board[0][i]=='X') {
                    res++;
                    if(i==0) continue;   
                    else if(board[0][i-1]=='X') res--;
                }
            }
            return res;
        }
        
        else if (board[0].size()==1){
            for(int i =0; i< board.size(); i++){
                if(board[i][0]=='X') {
                    res++;
                
                    if(i==0) continue;
                
                    else if(board[i-1][0]=='X') res--;
                }
            }
            return res;
        }
        
        
        for (int i =0; i<board.size(); i++){
            for(int j =0; j<board[0].size(); j++){
                if(board[i][j]=='X') {
                    res++;

                    if(i==0 && j==0){
                        continue;
                    }

                    else if(i==0 && j!=0){
                        if(board[i][j-1]=='X') res--;
                    }
                    
                    else if(i!=0 && j==0){
                        if(board[i-1][j]=='X') res--;
                    }
                    
                    else {
                        if(board[i-1][j]=='X' || board[i][j-1] =='X') res--;
                    }
                }
            }
        }
        
        return res;
    }
};
