#include <string>

#include <iostream>

using namespace std;

int main() {

	int x[3] = { 0, };
	
	for (int i = 0; i < 3; i++)
	{
		cin >> x[i];

	}

	int temp;


	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 2; j++)
		{
			if (x[j] >= x[j + 1])
			{

				temp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = temp;

			}
		}
	
	}

	cout << x[1];
}
