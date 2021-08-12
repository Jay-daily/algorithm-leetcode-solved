#include <iostream>
#include <algorithm>
#include <string>

using namespace std;



int main(){

	int a[10] = { 0, };

	for (int i = 0; i < 4; i++) {
		cin >> a[i];
	}

	int temp;


	for (int i = 0; i < 3; i++)
	{
		for (int j = i+1; j < 4; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}

		}
	}

	cout << a[0] *a[2];
	return 0;
	


}
