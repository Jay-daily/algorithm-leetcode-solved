class Solution {
public:
    int numTeams(vector<int>& rating) {
    
        int res = 0;

        for (int i = 0; i < rating.size() - 2; i++)
        {
            for (int j = i + 1; j < rating.size() - 1; j++)
            {
                if (rating[j] > rating[i])
                {
                    for (int k = j + 1; k < rating.size(); k++)
                    {
                        if (rating[k] > rating[j])
                            res++;
                    }
                }

                if (rating[j] < rating[i])
                {
                    for (int k = j + 1; k < rating.size(); k++)
                    {
                        if (rating[k] < rating[j])
                            res++;
                    }
                }
            }
        }
    
        return res;
        
    }
};
