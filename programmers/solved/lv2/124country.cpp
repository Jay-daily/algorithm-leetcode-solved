#include <string>
#include <vector>
#include <math.h>
using namespace std;


string solution(int n) {
    string s = "";
    string x = "0124";
    while (n != 0) {
        if (n % 3 == 0) {
            s = x[n % 3 +3] + s;
            n = n / 3 -1;
        }
        else {
            s = x[n % 3] + s;
            n = n / 3;
        }
    }
    return s;
}
