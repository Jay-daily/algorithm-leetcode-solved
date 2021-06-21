class Solution {
public:
    string sortSentence(string s) {
        
            vector<string>tempVec;
            for (int i = 0; i < s.size();) {
                string tempStr = "";
                int i2 = i;
                for (int j = i; s[j] != 32 && j < s.size(); j++)
                {
                    tempStr += s[j];
                    i2 = j + 2;
                }
                i = i2;
                tempVec.push_back(tempStr);
                if (i2 > s.size())
                    break;
            }

            string res = "";
            int k = '1';
            while (1) {
                for (int i = 0; i < tempVec.size(); i++) {
                    string tempStr2 = "";
                    for (int j = 0; j < tempVec[i].size(); j++) {
                        tempStr2 += tempVec[i][j];
                        if (tempVec[i][j] == k)
                        {
                            tempStr2.erase(j);
                            res += tempStr2;
                            res += " ";
                        }
                    }
                }

                k++;
                if ((k - 49) == tempVec.size())
                {
                    res.erase(res.size()-1);
                    return res;
                }
            }
        
       
    }
};
