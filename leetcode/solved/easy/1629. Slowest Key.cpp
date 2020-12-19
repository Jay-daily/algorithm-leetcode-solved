class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        
        int max = releaseTimes[0];
        char maxchar = keysPressed[0];
        for(int i  =0; i< releaseTimes.size()-1; i++){
            if (releaseTimes[i+1]- releaseTimes[i] > max )
            {    
                max = releaseTimes[i+1]- releaseTimes[i];
                maxchar = keysPressed[i+1];
            }
            
            else if (releaseTimes[i+1]- releaseTimes[i] == max && keysPressed[i+1] > maxchar)
            {    
                maxchar = keysPressed[i+1];
            }
            
        }
        return maxchar;
    }
};
