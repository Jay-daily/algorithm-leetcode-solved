class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        while(1){
            sort(stones.begin(),stones.end());
            
            if (stones.size() == 1)
                return stones[0];
            else if (stones.size() == 0)
                return 0;
            
            int i = stones.size()-1;
        
            if(stones[i] == stones[i-1]){
                stones.pop_back();
                stones.pop_back();
            }
            
            else if (stones[i] != stones[i-1]){
                stones[i-1] = stones[i] - stones[i-1];
                stones.pop_back();
            }
            
        }
        return  0;
    }
};
