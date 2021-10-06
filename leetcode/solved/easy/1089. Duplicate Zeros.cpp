class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for(int i =0; i< arr.size(); i++){
            if(arr[i]==0 && i <arr.size()-2)
            {
                for(int j = arr.size()-1; j>=i+2; j--){
                    arr[j] = arr[j-1];
                }
                arr[i+1]=0;
                i++;
            }
            else if (arr[i]==0 && i ==arr.size()-2)
            {
                arr[i+1]=0;
                i++;   
            }
        }
    }
};


