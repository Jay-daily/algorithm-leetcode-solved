class Solution {
public:
    
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        vector<int>res;
        deque<int>tmp;

        sort(deck.begin(),deck.end(),greater<int>());
        
        for(int i =0; i<deck.size(); i++){
            if(i==0) {
                tmp.push_back(deck[i]);
            }
            else{
                tmp.push_front(tmp[tmp.size()-1]);
                tmp.pop_back();
                tmp.push_front(deck[i]);
            }
            // cout<< i << "th : ";
            // for(auto K : tmp) cout<< K << " ";
            // cout << endl;
        }
        for(auto k : tmp){
            res.push_back(k);
        }
        
        return res;
    }
};
