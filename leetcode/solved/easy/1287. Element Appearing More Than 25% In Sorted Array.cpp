class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int count =0;
        
        if (arr.size()==1)
            return 1;
        
        for (int i =1; i<arr.size(); i++){

            if (arr[i] == arr[i-1]){
                ++count;
                if(count >= arr.size()*0.25)
                    return arr[i];
            }
            else
                count =0;
        }
        return 1;
    }
    
};
