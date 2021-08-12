#include <iostream>
#include <algorithm>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int main() {

    long long x, y;
    cin >> x >> y;

    //1 2 3 4 5
    //6 6 3
    //(n * n+1)/2
    if (x < y)
        cout << y * (y + 1) / 2 - (x - 1) * x / 2;
    else
        cout << x * (x + 1) / 2 - (y - 1) * y / 2;
       
}
