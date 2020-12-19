class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
       for (int i = 0; i < arr.size(); i++) {
            int max = -1;
            int maxidx = i+1;
            if (i == arr.size() - 2)
            {
                arr[i] = -1;
            }
            for (int j = i+1; j< arr.size(); j++) {
                if (arr[j] > max)
                {
                    max = arr[j];
                    maxidx = j;
                }
            }
            for (int k = i; k < maxidx; k++) {
                arr[k] = max;
            }
       
        }
        return arr;
    }
};
