class Solution {
public:
    
    void flipRow(vector<vector<int>>& grid,int m){
        for(int j =0; j<grid[0].size();j++){
            grid[m][j]^=1;
        }
    }   
    
    
    void flipCol(vector<vector<int>>& grid, int n){
        for(int i =0; i<grid.size(); i++){
            grid[i][n]^=1;
        }   
    }
    
    int gridSum(vector<vector<int>>& grid){
        int res =0;
        for(int i=0; i<grid.size(); i++){
            for(int j =0; j<grid[0].size(); j++){
                if(grid[i][j]==1)
                    res += pow(2,grid[0].size()-j-1);
            }
        }
        return res;
    }
    

    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        if (grid.size()==1) return 1;
        
        for(int i =0; i<m; i++){
            if(grid[i][0]!= 1){
                flipRow(grid,i);
            }
        }
        
        for(int j=1; j<n; j++){
            int one =0;
            int zero =0;
            for(int i =0; i<m; i++){
                if(grid[i][j]==1)one++;
                else zero++;
            }
            if(one < zero) {
                flipCol(grid,j);
            }
        }
        
        return gridSum(grid);

        
    }
};
