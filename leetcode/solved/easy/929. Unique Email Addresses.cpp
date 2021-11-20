class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string>s;
        for(int i =0; i<emails.size(); i++){
            string tmp= "";
            int flag =0;
            for(int j=0; j<emails[i].size(); j++){             
                if(flag == 0 && emails[i][j]=='.'){
                    continue;
                }
                else if (emails[i][j]=='+'){
                    while(1){
                        j++;
                        if(emails[i][j] == '@' || j ==emails[i].size()-1){
                            flag =1;
                            break;
                        }
                    }
                }
                else if (emails[i][j]=='@'){
                    flag=1;
                }
                tmp += emails[i][j];
            }
            // cout<< tmp<<endl;
            s.insert(tmp);
        }
        return s.size();
    }
};
