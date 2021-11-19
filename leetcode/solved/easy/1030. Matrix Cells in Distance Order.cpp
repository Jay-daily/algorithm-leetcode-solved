class Solution {
public:
    vector<vector<int>>res;
    
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        
        multimap<int,vector<int>>m;
        
        for(int i =0; i<rows; i++){
            for(int j =0; j<cols; j++){
                vector<int>tmp;
                tmp.push_back(i);
                tmp.push_back(j);     
                m.insert(pair<int,vector<int>>(abs(rCenter-i)+abs(cCenter-j),tmp));
            }
        }
        
        for(auto it : m){
            res.push_back(it.second);
        }
        
        return res;   
            
    }
};
