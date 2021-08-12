#include <iostream>


using namespace std;

int main() {

   
    int n;

    cin >> n;


    double a = 350.34;
    double b = 230.90;
    double c = 190.55;
    double d = 125.30;
    double e = 180.90;


    for (int i = 0; i < n; i++) {

        int a1, b1, c1, d1, e1;
        cin >> a1 >> b1 >> c1 >> d1 >> e1;
        
        cout << "$";
        printf("%.2lf\n", a * a1 + b * b1 + c * c1 + d * d1 + e * e1);


    }


    return 0;
}
