class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int res=0;
        int len = startTime.size();
        for(int i =0; i<len;i++){
            if(queryTime >=startTime[i] && queryTime<=endTime[i]){
                res++;
            }
        }
        return res;
    }
};
