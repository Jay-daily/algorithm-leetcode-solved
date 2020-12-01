class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0;
        vector<int> copy1;
         copy1.resize(heights.size());
        std::copy(heights.begin(), heights.end(), copy1.begin());

        
        for(int j = heights.size(); j >0; j--)
        {
            for(int i = 0; i < j-1; i++)
           {
                if(heights[i]>heights[i+1])
                {   int temp = 0;
                    temp = heights[i];
                    heights[i] = heights[i+1];
                    heights[i+1] = temp;    
                 
                }
            }
        }
        for(int i=0; i<heights.size(); i++){
            if (copy1[i] != heights[i])
            count++;
        }
        
        
        return count;
    }
};
