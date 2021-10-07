class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>res;
        for(int i = left; i<=right; i++){
            string tmp = to_string(i);
            int cnt =0;
            for(int j =0; j<tmp.size();j++){
                int div = tmp[j]-'0';
                if(div!=0 && i%div==0){
                    cnt++;
                    continue;
                }
            }
            if (cnt==tmp.size()) res.push_back(i);
        }
        return res;
    }
};
