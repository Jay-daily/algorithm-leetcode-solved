#include <iostream>
#include <algorithm>

using namespace std;

int main() {

  
    double a, b, c, d;

    cin >> a >> b >> c >> d;

    double c1 = a / c + b / d;
    double c2 = c / d + a / b;
    double c3 = d / b + c / a;
    double c4 = b / a + d / c;
   
    double maxc = max({ c1,c2,c3,c4 });
  
    if (maxc == c1)
    {
        cout << 0;
        return 0;
    }
    else if (maxc == c2)
    {
        cout << 1;
        return 0;
    }
    else if (maxc == c3)
    {
        cout << 2;
        return 0;
    }
    else if (maxc == c4)
    {
        cout << 3;
        return 0;
    }



}

