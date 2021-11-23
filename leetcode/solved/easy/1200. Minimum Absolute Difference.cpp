class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>res(0, vector<int>(0,0));
        int min = INT_MAX;
        sort(arr.begin(), arr.end());
        for(int i =0; i < arr.size()-1; i++){
            if(arr[i+1]-arr[i] < min) min= arr[i+1]-arr[i];
        }
        
        for(int i =0; i<arr.size()-1; i++){
            if(arr[i+1]-arr[i] == min){
                vector<int>tmp;
                tmp.push_back(arr[i]);
                tmp.push_back(arr[i+1]);
                //tmp.push_back({arr[i],arr[i+1]});
                //저번에 discussion에서 봤는데, 컴파일 오류남.
                //안되는 걸로 수정.
                res.push_back(tmp);
            }
        }
        
        return res;
    }
};
