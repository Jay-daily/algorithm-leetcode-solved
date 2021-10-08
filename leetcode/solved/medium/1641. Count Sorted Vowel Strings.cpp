class Solution {
public:
    int countVowelStrings(int n) {
        int a=1,b=1,c=1,d=1,e=1;
        for(int i =2; i<=n;i++){
            a = a+b+c+d+e;
            b = b+c+d+e;
            c = c+d+e;
            d = d+e;
            e = e;
        }
        return a+b+c+d+e;
    }
};
