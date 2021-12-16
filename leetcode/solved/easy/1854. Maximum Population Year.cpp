class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int alive[101]={0,};
        for(auto log : logs){
            for(int i = log[0]-1950; i<log[1]-1950;i++) alive[i]++;
        }
        int maxn = 0;
        int maxidx =0;
        for(int i = 0; i<101; i++){
            //cout<< alive[i] << " ";
            //if(i%10==0) cout<<endl;
            if (maxn < alive[i]){
                maxn = alive[i];
                maxidx = i + 1950;
            }
        }
        return maxidx;
    }
};
