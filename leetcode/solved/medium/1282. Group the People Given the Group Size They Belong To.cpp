class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        multimap<int,int> m;
        vector<vector<int>>res;
        for(int i =0; i< groupSizes.size();i++){
            m.insert(pair<int,int>(groupSizes[i],i));
        }
        for (int i= 0 ; i <=groupSizes.size(); i++){
            if(m.find(i)!=m.end()){
                int tmpcnt=0;
                vector<int>v;
                for (auto it= m.equal_range(i).first; it!=m.equal_range(i).second; ++it){
                    v.push_back(it->second);
                    ++tmpcnt;
                    if(tmpcnt==i){
                        res.push_back(v);
                        v.clear();
                        tmpcnt=0;
                    }
                }
            }
        }
        return res;
    }
};
