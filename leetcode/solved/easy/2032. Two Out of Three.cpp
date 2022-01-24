class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>res;
        int check[101]={0,};
        
        set<int>s1;set<int>s2;set<int>s3;
        for(auto num : nums1) s1.insert(num);
        for(auto num : nums2) s2.insert(num);
        for(auto num : nums3) s3.insert(num);
        
        for(auto num : s1) if(check[num]==0) check[num]++;
        for(auto num : s2) if(check[num]<=1) check[num]++;
        for(auto num : s3) if(check[num]<=2) check[num]++;
        for(int i =0; i<=100; i++) if(check[i]>=2) res.push_back(i);
        return res;
    }
};
