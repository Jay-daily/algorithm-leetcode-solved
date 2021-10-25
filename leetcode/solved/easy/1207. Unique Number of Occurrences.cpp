class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
//         vector<int>check;
        
//         sort(arr.begin(),arr.end());
//         int tmp = arr[0];
//         int cnt = 1;
//         for(int i =1; i<arr.size(); i++){
//             if(arr[i] == tmp) cnt++;
//             else{
//                 check.push_back(cnt);
//                 tmp = arr[i];
//                 cnt = 1;
//             }
//             if(i == arr.size()-1) check.push_back(cnt);
//         }
        
//         sort(check.begin(), check.end());
//         if(check.size()==1)return true;
//         for(int i =0; i<check.size()-1; i++){
//             if(check[i] == check[i+1]) return false;
//         }
        
        map<int,int>m;
        set<int>s;
        for(int i =0; i<arr.size(); i++){
            m[arr[i]]++;
        }
        for(auto it: m){
            s.insert(it.second);
        }
    
        return m.size() == s.size() ? true : false;
    }
};
