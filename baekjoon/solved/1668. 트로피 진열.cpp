#include <iostream>
#include <string>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;


int main() {

	int n;
	int x[51] = { 0, };
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	int lcnt = 1;
	int big = x[0];
	for (int i = 0; i < n; i++) {
		if (x[i] > big)
		{
			lcnt++;
			big = x[i];
		}
	}
	int rcnt = 1;
	int big2 = x[n-1];
	for (int i = n-1; i >= 0; i--) {
		if (big2 < x[i])
		{
			rcnt++;
			big2 = x[i];
		}
	}
	cout << lcnt << endl << rcnt;

}





