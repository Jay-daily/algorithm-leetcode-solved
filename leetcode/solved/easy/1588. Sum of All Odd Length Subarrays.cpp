class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum =0;
        int space =1;
        while(space <= arr.size()){
            for(int i =0; i+space<=arr.size();i++){
                for(int j=i, cnt=0; cnt<space; j++,cnt++){
                    sum+= arr[j];
                }
            }
            space+=2;
        }
        return sum;
    }
};
