class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        for(int i =0; i<nums1.size(); i++){
            for(int j =0; j<nums2.size(); j++){
                if(nums2[j] == nums1[i]){
                    if(j == nums2.size()-1){
                        res.push_back(-1);
                    }
                    else{
                        while(1){
                            if(j == nums2.size()-1){
                                res.push_back(-1);
                                break;
                            }
                            if(nums2[++j] > nums1[i]){
                                res.push_back(nums2[j]);
                                break;
                            }
                        }
                    }
                }
            }
        }
        return res;
    }
};
