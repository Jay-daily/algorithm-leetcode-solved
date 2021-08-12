#include <iostream>



using namespace std;



int main() {

	int a, b, c;

	while (1)
	{
		int a, b, c;
		cin >> a >> b >> c;


		if (a == 0 && b == 0 && c == 0)

			return 0;
		else
		{
			if (a + b > c && b + c > a && c + a > b)
			{
				if (a == b || b == c || c == a)
				{
					if (a == b && b == c && c == a)
					{
						cout << "Equilateral" << endl;
					}

					else
						cout << "Isosceles" << endl;
				}
				else
					cout << "Scalene" << endl;

			}

			else 
				cout << "Invalid" << endl;
		}


	}
	

}
