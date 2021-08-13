#include <iostream>



using namespace std;



int n;
int x[1000001] = { 0, };


int MIN = 1000001;
int MAX = -1000001;

int main() {
	
	cin >> n;


	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
		if (x[i] < MIN)
			MIN = x[i];
		if (x[i] > MAX)
			MAX = x[i];

	}

	cout << MIN << " " << MAX;

	return 0;
	


}


