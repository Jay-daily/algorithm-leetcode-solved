#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <string>


using namespace std;

int main()
{

	string a;
	string key;
	string ans;

	getline(cin,a);


	cin >> key;

	int str_size = a.length();
	int key_size = key.length();
	int x = 0;
	

	for (int i = 0; i < str_size; i++)
	{
		
		if (a[i] == ' ')
			ans += ' ';

		else if ((a[i] - '0') - (key[x] - '0') <= 0)
			ans += (a[i] - '0') - (key[x] - '0') - 1 + 26 + 'a';

		else
			ans += (a[i] - '0') - (key[x] - '0') - 1 + 'a';
		x = (x + 1) % key_size;

		

	}

	cout << ans << endl;



}



