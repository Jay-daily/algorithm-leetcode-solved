#include <iostream>

using namespace std;
int main() {



	while (1)
	{

		int a = 0;
		int b = 0;
		int c = 0;

		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0)
			break;

		if (b - a == c - b)
			cout << "AP " << c + (b - a) << endl;

		else
			cout << "GP " << c * (b / a)<<endl;

		
	}
   

}
