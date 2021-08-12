#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;



int main() {

    
    int n;
    cin >> n;
    int x[1000] = { 0, };
    int temp;

    for (int i = 0; i < n; i++) {
        x[i] = i+1;
    }

    for (int i = 0; i < n; i++) {

        cout << x[i] << " ";
        
        for (int j = i + 1; j < n-1; j++) {

                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;

              

                    //1 2 3 4
                    //  2 3 4
                    //  3 4 2
            }
        }
        

    }

