#include <string>
#include <vector>

using namespace std;

vector<int> toBinary(int x, int k){
    vector <int> v;
    for(int i=0; i<k; i++){
        v.push_back(x%2);
        x=x/2;
    }
    return v;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<int> x; vector<int> y; vector<int>temp;
    for(int i =0; i< arr1.size(); i++){
        x = toBinary(arr1[i],n);
        y = toBinary(arr2[i],n);
        string s ="";
        for(int j =0; j < x.size(); j++){
            if(x[x.size()-1-j] ==0 && y[y.size()-1-j] ==0) s += ' ';
            else s += '#';
        }
        answer.push_back(s);
    }
    return answer;
}
