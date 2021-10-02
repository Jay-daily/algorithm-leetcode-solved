class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int smallest=0;
        vector<int>v;
        for(int i =0; i<rectangles.size(); ++i){
            int tmp = min(rectangles[i][0],rectangles[i][1]);
            if (tmp > smallest) smallest = tmp;
            v.push_back(tmp);
        }
        int cnt=0;
        for(int i =0; i<v.size(); ++i){
            if(v[i]==smallest) cnt++;
        }
        return cnt;
    }
};
