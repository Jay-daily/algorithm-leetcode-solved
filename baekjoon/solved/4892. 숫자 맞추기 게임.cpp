#include <iostream>



using namespace std;


int main() {

	int i = 1;
	while (1) {

		
		int n0 = 0;
		int n1 = 0;
		int n2 = 0;
		int n3 = 0;
		int n4 = 0;
		

		cin >> n0;

		if (n0 == 0)
			break;


		cout << i << ". ";

		n1 = 3 * n0;

		if (n1 % 2 == 0)
		{
			cout << "even ";
			n2 = n1 / 2;
			n3 = 3 * n2;
			n4 = n3 / 9;
			cout << n4 << endl;
		}
		else
		{
			cout << "odd ";
			n2 = (n1 + 1) / 2;
			n3 = 3 * n2;
			n4 = n3 / 9;
			cout << n4 << endl;
		}
		
		i++;
	



	}
}


