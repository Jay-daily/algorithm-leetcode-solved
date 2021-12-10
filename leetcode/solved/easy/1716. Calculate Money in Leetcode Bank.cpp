class Solution {
public:
    int totalMoney(int n) {
        int res =0;
        int k =1;
        int seven=1;
        for(int i =0; i<n; i++){
            res+= (i%7+k);
            if(seven == 7){
                seven =0;
                k++;
            }
            seven++;
        }
        return res;
    }
};
