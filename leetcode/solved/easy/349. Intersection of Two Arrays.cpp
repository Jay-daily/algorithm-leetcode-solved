class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        set<int>s;
        for(int i=0; i<nums1.size(); i++){
            s.insert(nums1[i]);
        }
        for(auto it = s.begin(); it!=s.end(); it++){
            for(int i =0; i<nums2.size(); i++){
                if(*it == nums2[i]){
                    res.push_back(*it);
                    break;   
                }
            }
        }
        return res;
    }
};
