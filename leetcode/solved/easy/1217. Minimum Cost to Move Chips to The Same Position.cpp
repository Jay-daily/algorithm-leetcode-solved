class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int check[2] = {0,0};
        for(int i =0; i<position.size(); i++){
            if(position[i]%2==1)check[0]++;
            else check[1]++;
        }
        return min(check[0],check[1]);
        
    }
};
