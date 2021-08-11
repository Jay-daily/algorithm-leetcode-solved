#include <iostream>
#include <string>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int fire[2000001];

int main() {

	int n,k;
	int x[100] = { 0, };
	int sum = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	
	for (int j = 0; j < n; j++) {
		for (int i = x[j]; i < k+1; i +=x[j]) {
			fire[i] = 1;
		}
	}
	int count = 0;
	for (int i = 0; i < k+1; i++) {
		if (fire[i]==1)
		count++;
	}
	cout << count;
	
}





