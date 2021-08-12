#include <iostream>
#include <math.h>

using namespace std;

int main() {


	int n; // testCase
	cin >> n;

	int x;

	for (int i = 0; i < n; i++)
	{
		cin >> x;

		if (x < 10) {
			if (x * x % 10 == x)
				cout << "YES" << endl;

			else
				cout << "NO" << endl;
		}
		else if (x >= 10 && x < 100)
		{
			
		if (x * x % 100 == x)
			cout << "YES" << endl;
			
		else
		cout << "NO" << endl;
			}

		else if (x >= 100 && x < 1000)
		{
			if (x * x % 1000 == x)
				cout << "YES" << endl;

			else
				cout << "NO" << endl;
		}
		else if(x==1000)
			cout << "NO" << endl;

	}
}
