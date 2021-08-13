#include <iostream>
#include <math.h>


using namespace std;


int main() {

	int n;

	cin >> n;

	int a, b;
	cin >> a >> b;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;

		if (sqrt(a*a +b*b) >= x)
			cout << "DA" <<endl;
		else
			cout << "NE"<<endl;
	
	}


}


