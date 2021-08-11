#include <iostream>

using namespace std;

int main() {

	int N, M;
	int x[300][300] = { 0, };

	cin >> N >> M;
	
	for (int i = 0; i < N; i++) {

		for (int j = 0; j < M; j++) {
			cin >> x[i][j];
		}
	}
	
	int K;
	
	cin >> K;
	int sum = 0;
	for (int k = 0; k < K; k++) {

		int I,J,X,Y;
		cin >> I >> J >> X >> Y;
		
		for (int i = I-1; i < X; i++)
		{
			for (int j = J-1; j < Y; j++) {
				sum += x[i][j];
			}

		}
		
		cout << sum <<endl;
		sum = 0;
	}
	
	
}





