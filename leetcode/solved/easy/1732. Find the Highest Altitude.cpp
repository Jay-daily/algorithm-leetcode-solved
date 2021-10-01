class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int tmp =0;
        int max =0;
        for(int i =0; i<gain.size();i++){
            tmp += gain[i];
            if(tmp>max) max=tmp;
        }
        return max;
    }
};
