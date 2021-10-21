class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        
        int rowSize = matrix.size();
        int colSize = matrix[0].size();
        vector<int>colMax;
        vector<int>rowMin;
        vector<int>res;
        
        for(int j =0; j < colSize; j++){
            int tmp=INT_MIN;
            for(int i =0; i<rowSize; i++){
                if(matrix[i][j] > tmp) tmp = matrix[i][j];
            }
            colMax.push_back(tmp);
            cout << tmp << " ";
        }
        cout << endl;
        for(int i =0; i<rowSize; i++){
            int tmp=INT_MAX;
            for(int j =0; j< colSize; j++){
                if(matrix[i][j] < tmp) tmp = matrix[i][j];
            }
            rowMin.push_back(tmp);
            cout << tmp << " ";
        }
        
        for(int i =0; i<colMax.size(); i++){
            for(int j =0; j< rowMin.size(); j++){
                if(colMax[i] == rowMin[j])
                    res.push_back(colMax[i]);
            }
        }
        return res;
    }
};
