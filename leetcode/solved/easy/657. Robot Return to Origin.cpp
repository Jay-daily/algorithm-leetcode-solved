class Solution {
public:
    bool judgeCircle(string moves) {
        int ud = 0;
        int lr = 0;
        for(int i =0; i<moves.size(); i++){
            if(moves[i]=='U')ud++;
            else if(moves[i]=='D')ud--;
            else if (moves[i]=='L')lr--;
            else if (moves[i]=='R') lr++;
        }
        return ud==0 && lr== 0;
    }
};
