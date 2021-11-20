class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>res;
        map<int,int>m;
        for(int i =0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto it : m){
            v.push_back(make_pair(it.first,it.second));
            // cout<< it.first << " " << it.second <<endl;
        }
        // cout<< endl;
        sort(v.begin(), v.end(), [](pair<int,int>&a, pair<int,int>&b){
            return a.second != b.second ? a.second < b.second : a.first > b.first;
        });
        
        
        for(auto it: v){
            // cout<< it.first << " ";
            for(int i =0; i< nums.size(); i++){
                if(nums[i] == it.first) res.push_back(nums[i]);
            }
        }
        return res;
    }
};
