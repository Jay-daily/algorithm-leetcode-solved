class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int sum=0;
        int len = piles.size();
        if(len==3)return piles[1];
        
        for(int i =len-2; i > len/3-1; i-=2){
            sum+=piles[i];
        }
        return sum;
        
    }
};
