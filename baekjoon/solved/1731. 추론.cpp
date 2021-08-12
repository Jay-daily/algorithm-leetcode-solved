#include <iostream>
#include <math.h>

using namespace std;

int main() {
	

	int n;

	cin >> n;
	long long x[100] = { 0, };


	for (int i = 0; i < n; i++) {

		cin >> x[i];
	}

	long long ans = 0;


	
	if ((x[1] % x[0]) == 0)
	{
		ans = x[0];
		for (int i = 0; i < n; i++) {

			ans *= (x[1] / x[0]);

		}
		cout << ans << endl;
	}

	else 
	{
		ans = x[0];
		for (int i = 0; i < n; i++) {

			ans += (x[1] - x[0]);
		}
		cout << ans << endl;
	}

	return 0;
		
}
