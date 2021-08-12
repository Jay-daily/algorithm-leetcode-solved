#include <iostream>
#include <algorithm>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;



int main() {

  //1 2 3 4// 5 6 7
    //10
    //5마리남음
    //1 2
    //2마리남음
    //1
    //1마리 남음
    //1
    
    int x;
    cin >> x;
    
    int fly = 1;
    int count = 0;
    while (x!=0)
    {
        if (x < fly)
            fly = 1;
        x -= fly;
        fly++;
        count++;

    }
    cout << count;
}

    
