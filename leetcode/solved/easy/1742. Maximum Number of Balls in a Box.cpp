class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        map<int,int>m;
        for(int i=lowLimit; i<=highLimit;i++){
            string tmp = to_string(i);
            int sum =0;
            for(int j =0; j<tmp.size(); j++){
                sum+= tmp[j]-'0';
            }
            m[sum]++;
        }
        int max=-1;
        for(auto &it : m){
            if(it.second > max){
                max = it.second;
            }
        }
        return max;
    }
};
