#include <iostream>
#include <string>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int main() {

	int n;
	char x[10] = { 0, };

	cin >> n;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < 8; j++) {
			cin >> x[j];
		}

		int k;
		k = (x[0] - 65) * 26 * 26 + (x[1] - 65) * 26 + x[2]-65;

		int ans = abs(k - ((x[4]-48) * 1000 + (x[5]-48) * 100 + (x[6]-48)*10 + (x[7]-48)));

		if (ans <= 100)
			cout << "nice" << endl;
		else
			cout << "not nice" << endl;


	}
}





