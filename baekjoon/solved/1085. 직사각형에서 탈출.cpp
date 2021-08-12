#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {

    int a, b, c, d;
    cin >> a >> b >> c >> d;


    cout << min(min(a, c - a), min(b, d - b));

}

    
