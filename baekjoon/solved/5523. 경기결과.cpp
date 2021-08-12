#include <iostream>



using namespace std;



int main() {

	
	int n;
	int awin=0;
	int bwin = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {

		int a, b;
		cin >> a >> b;

		if (a > b)
			awin++;
		else if (b > a)
			bwin++;
		else
			continue;

	}

	cout << awin << " " << bwin << endl;

	
	

}
