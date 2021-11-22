class Solution {
public:
    
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>res;
        for(int i =0; i<arr2.size(); i++){
            for(int j =0; j<arr1.size(); j++){
                if(arr2[i]==arr1[j]){
                    res.push_back(arr1[j]);
                    arr1[j] = -1;
                }
            }
        }
        vector<int>tmp;
        for(int i =0; i<arr1.size(); i++){
            if(arr1[i]!=-1){
                tmp.push_back(arr1[i]);
            }
        }
        sort(tmp.begin(), tmp.end());
        
        for(auto ele : tmp){
            res.push_back(ele);
        }
        
        return res;
    }
};
