//https://www.youtube.com/watch?v=6Sux9KoPJsc&ab_channel=CogentCoder

class Solution {
public:
    set<string>res;
    map<int,int>flag;
    string S;
    
    void solve(string tiles){
        for(int i =0; i<tiles.size(); i++){
            if(flag[i]!=1){
                S.push_back(tiles[i]);
                flag[i]=1;
                res.insert(S);
                solve(tiles);
                flag[i]=0;
                S.pop_back();
            }
        }
    }
    
    int numTilePossibilities(string tiles) {
        solve(tiles);
        return res.size();
    }
};


