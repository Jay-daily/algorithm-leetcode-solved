class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        
        vector<int>x(n,0);
        vector<vector<int>>mat(m,x);
        
        for(int x=0; x<indices.size();x++){
            for(int i =0;i <m;++i){    
                for(int j =0; j<n;++j){
                    if(i==indices[x][0]) mat[i][j]++;
                    if(j==indices[x][1]) mat[i][j]++;
                }
            }
        }
        
        int cnt=0;
        for(int i =0;i <m;++i){
            for(int j =0; j<n;++j){
                if(mat[i][j]%2==1)
                    cnt++;
            }
        }
        return cnt;
    }
};
