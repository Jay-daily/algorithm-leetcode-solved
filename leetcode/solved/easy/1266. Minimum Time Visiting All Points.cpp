class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int visit =0;
        
        for(int i =0; i< points.size()-1; i++){
                while(1)
                {
                    if (points[i][0] == points[i+1][0] && points[i][1] == points[i+1][1])
                        break;
                    
                    if(points[i][0] >= points[i+1][0] && points[i][1] >= points[i+1][1])
                    {
                        while(1)
                        {
                            if(points[i][0] == points[i+1][0] && points[i][1] == points[i+1][1])
                                break;
                            
                            if(points[i][0] != points[i+1][0] && points[i][1] != points[i+1][1])
                            {
                                points[i][0]--;
                                points[i][1]--;
                                visit++;
                            }
                            else if(points[i][0] == points[i+1][0] && points[i][1] != points[i+1][1])
                            {
                                points[i][1]--;
                                visit++;
                            }
                            else if (points[i][0] != points[i+1][0] && points[i][1] == points[i+1][1])
                            {
                                points[i][0]--;
                                visit++;
                            }
                        }
                    }  
                    else if(points[i][0] <= points[i+1][0] && points[i][1] <= points[i+1][1])
                    {
                        while(1)
                        {
                            if(points[i][0] == points[i+1][0] && points[i][1] == points[i+1][1])
                                break;
                            
                            if(points[i][0] != points[i+1][0] && points[i][1] != points[i+1][1])
                            {
                                points[i][0]++;
                                points[i][1]++;
                                visit++;
                            }
                            else if(points[i][0] == points[i+1][0] && points[i][1] != points[i+1][1])
                            {
                                points[i][1]++;
                                visit++;
                            }
                            else if (points[i][0] != points[i+1][0] && points[i][1] == points[i+1][1])
                            {
                                points[i][0]++;
                                visit++;
                            }
                        }
                        
                    }
                        
                    else if(points[i][0] >= points[i+1][0] && points[i][1] <= points[i+1][1])
                    {
                        while(1)
                        {
                            if(points[i][0] == points[i+1][0] && points[i][1] == points[i+1][1])
                                break;
                            
                            if(points[i][0] != points[i+1][0] && points[i][1] != points[i+1][1])
                            {
                                points[i][0]--;
                                points[i][1]++;
                                visit++;
                            }
                            else if(points[i][0] == points[i+1][0] && points[i][1] != points[i+1][1])
                            {
                                points[i][1]++;
                                visit++;
                            }
                            else if (points[i][0] != points[i+1][0] && points[i][1] == points[i+1][1])
                            {
                                points[i][0]--;
                                visit++;
                            }
                        }
                        
                    }
                        
                        
                    else if(points[i][0] <= points[i+1][0] && points[i][1] >= points[i+1][1])
                    {
                        while(1)
                        {
                            if(points[i][0] == points[i+1][0] && points[i][1] == points[i+1][1])
                                break;
                            
                            if(points[i][0] != points[i+1][0] && points[i][1] != points[i+1][1])
                            {
                                points[i][0]++;
                                points[i][1]--;
                                visit++;
                            }
                            else if(points[i][0] == points[i+1][0] && points[i][1] != points[i+1][1])
                            {
                                points[i][1]--;
                                visit++;
                            }
                            else if (points[i][0] != points[i+1][0] && points[i][1] == points[i+1][1])
                            {
                                points[i][0]++;
                                visit++;
                            }
                        }
                        
                    }
                        
                }
        }
        return visit;
    }
};
