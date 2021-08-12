#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {


	int n, f;
	int i;
	int temp;

	cin >> n >> f;

	n = (n / 100) * 100;
	
	for (i = 0; i < 100; i++) {
		temp = n;
		if ((temp += i) % f == 0)
			break;
	}

	if (i < 10)
		cout<<"0";

	cout << i;

}










