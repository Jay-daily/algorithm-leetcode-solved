#include <iostream>
#include <string>

using namespace std;

int main() {

	int n;
	cin >> n;

	string str;
	cin >> str;

	//A -> AGCT --> ACAG
	//G -> AGCT --> CGTA
	//C -> AGCT --> ATCG
	//T -> AGCT --> GAGT

	string str2;

	for (int i =0; i <n-1; i++)
	{
		str2 = str.substr(str.size() - 2);
		if (str2 == "AA")
		{
			str.replace(str.size() - 2, 2, "A");

		}

		else if (str2 == "AG")
		{
			str.replace(str.size() - 2, 2, "C");

		}

		else if (str2 == "AC")
		{
			str.replace(str.size() - 2, 2, "A");

		}
		else if (str2 == "AT")
		{
			str.replace(str.size() - 2, 2, "G");

		}
		else if (str2 == "GA")
		{
			str.replace(str.size() - 2, 2, "C");

		}
		else if (str2 == "GG")
		{
			str.replace(str.size() - 2, 2, "G");

		}
		else if (str2 == "GC")
		{
			str.replace(str.size() - 2, 2, "T");

		}
		else if (str2 == "GT")
		{

			str.replace(str.size() - 2, 2, "A");
		}
		else if (str2 == "CA")
		{
			str.replace(str.size() - 2, 2, "A");

		}
		else if (str2 == "CG")
		{
			str.replace(str.size() - 2, 2, "T");

		}
		else if (str2 == "CC")
		{

			str.replace(str.size() - 2, 2, "C");
		}
		else if (str2 == "CT")
		{
			str.replace(str.size() - 2, 2, "G");

		}
		else if (str2 == "TA")
		{
			str.replace(str.size() - 2, 2, "G");

		}
		else if (str2 == "TG")
		{
			str.replace(str.size() - 2, 2, "A");

		}
		else if (str2 == "TC")
		{

			str.replace(str.size() - 2, 2, "G");
		}
		else if (str2 == "TT")
		{
			str.replace(str.size() - 2, 2, "T");

		}

		

	}
	cout << str;
}





