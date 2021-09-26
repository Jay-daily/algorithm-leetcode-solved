class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int row = mat[0].size();
        int col = mat.size();

        for(int k =0; k<row; k++){
            int i =0; int j= k;
    
            vector<int>v;
            while(i<col && j<row){
                v.push_back(mat[i][j]);
                i++;j++;
            }         

            sort(v.begin(),v.end());
            i=0; j=k;
            for(int q = 0; q<v.size();q++){
                mat[i][j] =v[q];
                i++;j++;
            }

        }
        for(int k =1; k<col;k++){
            int i =k; int j= 0;
            vector<int>v;
            while(i<col && j<row){
                v.push_back(mat[i][j]);
                i++;j++;
            }
            
            sort(v.begin(),v.end());
            i =k; j=0;
            for(int q = 0; q<v.size();q++){
                mat[i][j] =v[q];
                i++;j++;
            } 
        }
        return mat;
    }
};
