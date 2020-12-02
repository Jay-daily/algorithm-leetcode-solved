class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;
        bool res = false;
        for (int i = 0; i < arr.size(); i++){
            if (arr[i] % 2 ==1)
            {
                count++;
                if (count ==3){
                res = true;
                return res;
                }      
            }
            
            else if (arr[i]%2 ==0)
                count = 0;

        }
        return res;
    }
};
