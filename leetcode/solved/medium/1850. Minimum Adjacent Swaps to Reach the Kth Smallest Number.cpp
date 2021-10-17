//thanks to https://leetcode.com/problems/minimum-adjacent-swaps-to-reach-the-kth-smallest-number/discuss/1186790/C%2B%2B-next_permutation-solution.-Greedy.

class Solution {
public:
    int getMinSwaps(string num, int k) {
        int res =0;
        string org = num;
        for(int i =0; i<k;i++){
            next_permutation(num.begin(), num.end());
        }
        
        for(int i =org.size()-1; i>=0; i--){
            int j = i;
            while(num[i]!=org[j])j--;
            for(int l = j; l<i; l++){
                swap(org[l],org[l+1]);
                res++;
            }
        }
        return res;
    }
};
