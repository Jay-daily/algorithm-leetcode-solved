#include <iostream>
#include <string>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;


int main() {

	char x;
	
	char x1;
	while (1)
	{
		cin >> x;
		if (x >= 'A' && x <= 'Z')
		{
			x1 = x + 32;
		}
		else if (x >= 'a' && x <= 'z') {
			x1 = x - 32;
		}
		else if (x == '#')
		{
			break;
		}
		
		string y;
		getline(cin,y);

		int cnt = 0;
		for (int idx = 0; idx < y.size(); idx++) {
			if (y.at(idx) == x || y.at(idx) == x1)
			{
				cnt++;
			}

		}
		cout << x << " " << cnt << endl;
		cnt = 0;

	}

}





