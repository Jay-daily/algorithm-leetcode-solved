class Solution {
public:
    vector<int> countBits(int n) {
         
    vector<int>res;
    //for loop 0~ n (inlude n)
    for(int i = 0; i <= n; i++) {
        int tempcount = 0;
        int x = i;
        //binary making
        while (x > 0)
        {
            //count '1'
            if (x % 2 == 1)
                tempcount++;
            x = x / 2;
        }
        //push_back
        res.push_back(tempcount);
    }
    //return
    return res;
    }
};
