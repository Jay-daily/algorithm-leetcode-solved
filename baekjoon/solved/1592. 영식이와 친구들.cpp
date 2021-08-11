

#include <iostream>

using namespace std;




int main() {

	int n;
	int m;
	int l;
	int nl[1000] = { 0, };

	cin >> n >> m >> l;

	int i = 1;
	int x = 0;
	nl[1] = 1;
	int mode = 0;
	int count = 0;

	while (1)
	{
		if (nl[i] % 2 == 1)
		{
			
			if (mode == 0)
			{
				mode++;
			}
			else {
				 nl[i]++;
			}

			if (nl[i] == m)
			{
				x = nl[i];
				break;
			}
			if (nl[i] % 2 == 1)
			{
				i = i + l % n;
				count++;
			}
			else if (nl[i] % 2 == 0)
			{
				i = i + (n - l % n);
				count++;
			}
			if (i > n)
				i = i - n;

			
		}
		else if (nl[i] % 2 == 0)
		{
			
			nl[i]++;
			if (nl[i] == m)
			{
				x = nl[i];
				break;
			}
			if (nl[i] % 2 == 1)
			{
				i = i + l % n;
				count++;
			}
			else if (nl[i] % 2 == 0)
			{
				i = i + (n - l % n);
				count++;
			}
			if (i > n)
				i = i - n;
		}

	}
	
	cout << count;
	

}
