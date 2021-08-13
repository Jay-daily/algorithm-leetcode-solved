#include <iostream>



using namespace std;


int main() {

	int x = 0;
	int y = 0;

	cin >> x >> y;

	int a = min(x, y);
	int b = max(x, y);

	if (a % 4 == 0)
	{
		if (b % 4 == 0)
		{
			cout << (b - a) / 4;

		}
		else if (b % 4 == 1)
		{
			a = a -3;
			cout << (b - a) / 4 + 3;
		}
		else if (b % 4 == 2)
		{
			a = a - 1;
			cout << (b - a) / 4 + 1;
		}
		else
		{
			a = a - 2;
			cout << (b - a) / 4 + 2;

		}

	}
	else if (a % 4 == 1)

	{
		if (b % 4 == 0)
		{
			a = a + 3;
			cout << (b - a) / 4 + 3;
		}
		else if (b % 4 == 1)
		{
			cout << (b - a) / 4;
		}
		else if (b % 4 == 2)
		{
			a = a + 1;
			cout << (b - a) / 4 + 1;
		}
		else
		{
			a = a + 2;
			cout << (b - a) / 4 + 2;

		}

	}

	else if (a % 4 == 2)
	{
		if (b % 4 == 0)
		{
			a = a + 2;
			cout << (b - a) / 4 + 2;

		}
		else if (b % 4 == 1)
		{
			a = a -1;
			cout << (b - a) / 4 + 1;
		}
		else if (b % 4 == 2)
		{
			cout << (b - a) / 4;
		}
		else
		{
			a = a + 1;
			cout << (b - a) / 4 + 1;

		}

	}
	else
	
		if (b % 4 == 0)
		{
			a = a + 1;
			cout << (b - a) / 4 + 1;
		}
		else if (b % 4 == 1)
		{
			a = a - 2;
			cout << (b - a) / 4 + 2;
		}
		else if (b % 4 == 2)
		{
			a = a - 1;
			cout << (b - a) / 4 + 1;
		}
		else
		{
			cout << (b - a) / 4;
		}
	
}


