class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int peakindex;
        int highest = -1;
        for (int i =0; i< arr.size(); i++){
            if(arr[i]>highest)
            {   
                highest = arr[i];
                peakindex = i;
            }
        }
        return peakindex;
    }
};
