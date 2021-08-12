#include <iostream>


using namespace std;

int main() {

  
   
    int n;
    cin >> n;
    int x[20] = { 0, };
    int Y = 0;
    int M = 0;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        
        Y += (x[i]/30 +1)*10;
        M += (x[i] / 60 + 1) * 15;
    }



    if (Y < M)
        cout << "Y " << Y;

    else if (Y > M)
        cout << "M " << M;

    else if (Y = M)
        cout << "Y " << "M " << Y;

    return 0;

}
