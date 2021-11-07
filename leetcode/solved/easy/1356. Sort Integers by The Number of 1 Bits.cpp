class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int>res;
        vector<vector<int>>v(14,vector<int>(0));
        
        for(int i =0; i<arr.size(); i++){
            int cnt =0;
            int tmp = arr[i];
            while(tmp!=0){
                if((tmp%2)==1) cnt++;
                tmp/=2;
            }
            v[cnt].push_back(arr[i]);
        }
        
        for(int i =0; i< v.size(); i++){
            for(int j =0; j< v[i].size(); j++){
                sort(v[i].begin(),v[i].end());
                res.push_back(v[i][j]);
            }
        }
        
        return res;
    }
};
