class CustomStack {
public:
    int maxn;
    int top;
    int *st;
    
    CustomStack(int maxSize) {
        maxn = maxSize;
        st = new int[maxn];
        top = -1;
    }
    
    void push(int x) {
        if(top != maxn-1){
            st[++top] = x;
        }
    }
    
    int pop() {
        if(top==-1) return -1;
        return st[top--];
    }
    
    void increment(int k, int val) {
        int inc = min(k-1,top);
        for(int i =0; i<=inc;i++){
            st[i]+=val;
        }
    }
};



 
/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
