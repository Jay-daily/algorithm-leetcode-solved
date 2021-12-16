class Solution {
public:
    string reformatDate(string date) {
        map<string,string>m;
        vector<string>months = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        int i =0;
        for(auto month : months) {
            if(++i<10) m[month] += ("0" + to_string(i));
            else m[month] += to_string(i);
        }
        
        vector<string>v;
        for(int i =0;i<date.size(); i++){
            string tmp = "";
            while(date[i]!=' ' && i!=date.size()){
                tmp+= date[i++];
            }
            v.push_back(tmp);
        }
        
        string res = v[2] + "-" + m[v[1]]+ "-";
    
        string tmp ="";
        for(auto i : v[0]) {
            if(isdigit(i)) {
                tmp+= i;
            }
        }
        if(tmp.size()==1) tmp = "0" + tmp;
        
        return res+tmp;
    }
};
