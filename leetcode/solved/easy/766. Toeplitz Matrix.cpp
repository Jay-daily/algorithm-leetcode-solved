class Solution {
public:
    
    
    bool res = true;
    
    void check(int x, int y, int xlimit, int ylimit, int start, vector<vector<int>>& matrix){
        if(x == xlimit || y == ylimit) return;
        
        if(start != matrix[x][y]){
            res = false;
        }
        x++; y++;
        check(x,y,xlimit,ylimit,start,matrix);
        return;
    }
    
    
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        for(int i = 0; i<row; i++){
            check(i,0,row,col,matrix[i][0], matrix);
        }
        for(int j =0; j<col; j++){
            check(0,j,row,col,matrix[0][j], matrix);
        }
        return res;
    }
};
