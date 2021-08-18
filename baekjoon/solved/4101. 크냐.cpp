#include <iostream>
#include <string>


using namespace std;


int main() {

	int a = 0;
	int b = 0;

	while (1)
	{
		cin >> a >> b;

		if (a == 0 && b == 0)
			break;
		else
			a > b ? cout << "Yes" << endl : cout << "No"<<endl;



	}
	
}


