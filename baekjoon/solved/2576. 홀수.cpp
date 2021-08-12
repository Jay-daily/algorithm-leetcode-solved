#include <iostream>
#include <algorithm>
#include <string>

using namespace std;



int main(){

	int oddsum = 0;
	int min = 2147483646;
	int x;

	for (int i = 0; i < 7; i++) {
		cin >> x;
		if (x % 2 == 1) {
			oddsum += x;
			if (x < min) min = x;
		}
		
	}
	if (oddsum == 0) cout << -1; else cout << oddsum << " " << min;
		
		return 0;
	


}
