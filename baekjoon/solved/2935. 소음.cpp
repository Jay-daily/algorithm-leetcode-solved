#include <iostream>
#include <algorithm>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int main() {

    string a, b;
    string x;
    string azero = "";
    string bzero = "";
   
    cin >> a >> x >> b;

    if (x == "+")
    {
        if (a.size() > b.size())
        {
            for (int i = 0; i < a.size()-b.size() - 1; i++)
                azero += "0";
            for (int i = 0; i < b.size() - 1; i++)
                bzero += "0";

            x = "1" + azero + "1" + bzero;
            cout << x;
        }
        else if (a.size() < b.size())
        {
            for (int i = 0; i < b.size()-a.size() - 1; i++)
                bzero += "0";
            for (int i = 0; i < a.size() - 1; i++)
                azero += "0";

            x = "1" + bzero + "1" + azero;
            cout << x;
        }

        else if (a.size() == b.size())
        {
            for (int i = 0; i < b.size() - 1; i++)
                bzero += "0";
            x = "2" + bzero;
            cout << x;
        }
    }

    else if (x == "*")
    {

        for (int i = 0; i < a.size() - 1; i++)
            azero += "0";
        for (int i = 0; i < b.size() - 1; i++)
            bzero += "0";

        x = "1" + azero + bzero;
        cout << x;


    }
    


}
