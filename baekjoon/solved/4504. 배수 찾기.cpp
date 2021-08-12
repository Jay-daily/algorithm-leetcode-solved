#include <iostream>



using namespace std;



int main() {

	
	int x;
	cin >> x;

	while (1) {

		int n;
		cin >> n;
		
		if (n != 0)
		{
			if (n % x == 0)
				cout << n << " is a multiple of " << x << "."<<endl;
			else
				cout << n << " is NOT a multiple of " << x << "." << endl;
		}
		if (n == 0)
			return 0;
	}


}
