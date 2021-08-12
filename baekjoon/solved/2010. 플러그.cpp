#include <iostream>



using namespace std;



int main() {

	int max = 0;

	int n = 0;

	int x;
	cin >> x;

	for (int i = 0; i < x; i++) {

		cin >> n;

		
			max += n;

	}

	cout << max -x+1;
	

}
