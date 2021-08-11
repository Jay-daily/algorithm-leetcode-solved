

#include <iostream>

using namespace std;




int main() {


	int n;
	int q;
	int nl[100];
	int ql[1000];
	int sumn[100] = { 0, };

	cin >> n >> q;


	for (int i = 0; i < n; i++) {

		cin >> nl[i];
		for (int j = 0; j < i+1; j++) {
			sumn[i] += nl[j];
		}
	}
	
	for (int i = 0; i < q; i++) {

		cin >> ql[i];
		int j = 0;
		while (1)
		{
			if (ql[i] < sumn[j]) {
				cout << j+1 << endl;
				break;
			}
			else
				j++;
		}
		
	}
	

}
