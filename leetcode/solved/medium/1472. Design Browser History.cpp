class BrowserHistory {
public:
    vector<string>v;
    int cur =0;
    BrowserHistory(string homepage) {
        v.push_back(homepage);
    }
    
    void visit(string url) {
        while(cur < v.size()-1){
            v.pop_back();
        }
        v.push_back(url);
        cur++;
    }
    
    string back(int steps) {
        if(cur - steps < 0) {
            cur =0;
        }
        else {
            cur = cur-steps;
        }
        return v[cur];
    }
    
    string forward(int steps) {
        if(cur + steps > v.size()-1) cur = v.size()-1;
        else cur = cur+steps;
        return v[cur];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
