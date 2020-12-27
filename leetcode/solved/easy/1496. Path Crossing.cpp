class Solution {
public:
    bool isPathCrossing(string path) {
        
        typedef std::pair<int,int> pair;
        
        map<pair,int>save;
        
        int x = 0;
        int y = 0;
        
        save[pair(x,y)] = 1;
        
        for(int i = 0; i < path.size(); i++){
                      
            if(path[i] == 'N')
            {
                y++;
                if(!save[pair(x,y)])
                    save[pair(x,y)] = 1;
            
                else
                    return true;
            }
            else if(path[i] == 'S')
            {
                y--;
                if(!save[pair(x,y)])
                    save[pair(x,y)] = 1;
            
                else
                    return true;
            }
            else if(path[i] == 'E')
            {
                x++;
                if(!save[pair(x,y)])
                    save[pair(x,y)] = 1;
            
                else
                    return true;
            }
            else if(path[i] == 'W')
            {
                x--;
                if(!save[pair(x,y)])
                    save[pair(x,y)] = 1;
            
                else
                    return true;
            }
        }
        return false;
    }
};
