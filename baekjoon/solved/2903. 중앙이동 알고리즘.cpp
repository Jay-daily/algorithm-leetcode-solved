#include <iostream>
#include <algorithm>

using namespace std;

int main() {

  
    int n;
    cin >> n;


        //1 (2의0승)일떄 2의1승
        //2(2의1승)일때 2의2승
        //3 일때 2의3승
    
    int i =1;
    int x = 1;
    while (i <= n) {

        
        x *= 2;
        i++;
    }

    cout << (x + 1) * (x + 1);
    

}
