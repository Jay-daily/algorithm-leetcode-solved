class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int tmp;
       
        for(int i  =0;  i< A.size(); i++)
        {
            int first = 0;
            int last = A[i].size()-1;
            while((last - first) >=1)
            {
                tmp = A[i][last];
                A[i][last] = A[i][first];
                A[i][first] = tmp;                    
                
                last--;
                first++;
            }
            
            for(int j =0; j< A[i].size(); j++){
                if(A[i][j]==1)
                    A[i][j] = 0;
                else
                    A[i][j] =1;
            }
        }
        return A;
  
    }
};
