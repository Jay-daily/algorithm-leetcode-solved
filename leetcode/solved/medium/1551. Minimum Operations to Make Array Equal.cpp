class Solution {
public:
    int minOperations(int n) {
        int res =0;
        if(n==1||n==0){
            return 0;
        }
        else{
            if(n%2==0){
                for(int i =0; i<n/2;i++){
                    res += (i*2)+1;
                }
            }
            else{
                for(int i =0; i<n/2;i++){
                    res += (i+1)*2;
                }
            }
        }
        return res;
    }
};
