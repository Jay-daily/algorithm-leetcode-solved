class OrderedStream {
public:
    
    vector<string>os;
    int x;
    int idx =0;
    
    OrderedStream(int n) {
        vector<string> temp(n);
        os = temp;
        x = n;
    }
    vector<string> insert(int idKey, string value) {
        vector<string>res;
        os[idKey-1] = value;
        for(; idx<x;idx++){
            if(os[idx].empty()) break;
            res.push_back(os[idx]);      
        }
        return res;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
