//thanks to https://www.youtube.com/watch?v=P8K26R2Ci3c&ab_channel=ShivamPatel

class Solution {
public:
    int m;
    int n;
    int startx;
    int starty;
    int endx;
    int endy;
    int pathall;
    int res =0;
    
    void dfs(vector<vector<int>> grid,int i, int j, int path){
        if(i <0 || i>=m || j <0 || j>=n || grid[i][j]==-1) return;
        if(i==endx && j ==endy && path == pathall){
            res++;
            return;
        }
        grid[i][j]=-1;
        path++;
        dfs(grid,i+1,j,path);
        dfs(grid,i,j+1,path);
        dfs(grid,i-1,j,path);
        dfs(grid,i,j-1,path);
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        pathall = m*n;
        for(int i = 0; i< grid.size(); i++){
            for(int j =0; j< grid[i].size(); j++){
                if(grid[i][j]==1){
                    startx= i;
                    starty= j;
                }
                else if (grid[i][j]==2){
                    endx = i;
                    endy = j;
                }

                else if (grid[i][j]==-1){
                    pathall--;
                }
            }
        }
        dfs(grid,startx,starty,1);
        return res;
    }
};
