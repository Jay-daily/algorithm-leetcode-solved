class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int s = grid.size();
        vector<int>rowmax;
        vector<int>colmax;
        int rowmaxtmp =0;
        int colmaxtmp =0;
        int res =0;
        
        for(int i =0; i < s; i++){
            rowmaxtmp = 0;
            colmaxtmp = 0;
            for(int j =0; j < s; j++){
                if(grid[i][j]>=rowmaxtmp) rowmaxtmp =grid[i][j];   
                if(grid[j][i]>=colmaxtmp) colmaxtmp =grid[j][i];  
            }
            rowmax.push_back(rowmaxtmp);
            colmax.push_back(colmaxtmp);
        }
        
        for(int i =0; i < s; i++){
            for(int j =0; j < s; j++){
                res += abs(min(rowmax[i],colmax[j])-grid[i][j]);
            }
        }
        return res;
    }
};
