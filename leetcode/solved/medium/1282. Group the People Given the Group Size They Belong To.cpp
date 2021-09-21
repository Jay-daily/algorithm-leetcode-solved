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


//key point !
//map에 데이터 넣을때
m.insert(pair<int,int>(groupSizes[i],i));
//key find했을 때, 아무것도 없으면, m.end()를 return한다.
if(m.find(i)!=m.end()){
//m.equal_range(i).first ~ m.equal_range(i).second : first에는 begin값, second에는 end값이 있다.
for (auto it= m.equal_range(i).first; it!=m.equal_range(i).second; ++it){
//it의 data를 return.
v.push_back(it->second);
