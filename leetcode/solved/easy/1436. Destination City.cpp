class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        for(int i =0; i<paths.size(); i++){
            for(int j = 0; j<paths.size(); j++){
                if(i==j)
                    continue;
                if (paths[i][1] == paths[j][0])
                {
                    paths[i][1] = "hi";
                    paths[j][0] = "hi";
                } 
            }
        }
        
        for(int i =0; i<paths.size(); i++){
            if (paths[i][1] != "hi")
                return paths[i][1];
            
        }
        return "";
    }
};
