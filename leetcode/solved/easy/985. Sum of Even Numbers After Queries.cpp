class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        
        vector <int> res;
        int Asum =0;

        for(int j =0; j<A.size(); j++){
            if(A[j]%2==0)
                Asum += A[j];
        }
        
        for(int i =0; i < queries.size(); i++){ 
            
            if (A[queries[i][1]] %2 ==0)
                Asum -= A[queries[i][1]];
                
            A[queries[i][1]] += queries[i][0];
            
            if(A[queries[i][1]] %2 == 0)
                Asum += A[queries[i][1]];

            res.push_back(Asum);
            
        }
        
        return res;
    }
};
