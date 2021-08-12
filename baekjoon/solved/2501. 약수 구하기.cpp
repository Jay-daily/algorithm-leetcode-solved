#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n;
    int k;
    cin >> n>>k;
   
    int oricount = 0;
    int count = 0;
    int target = 0;

    
    for (int i = 1; i <= n; i++) {

        if (n % i == 0)
        {
            oricount++;
        }
    }
    
    if (oricount < k)
    {
        cout << 0;
        return 0;
    }
    
    for (int i = 1; i <= n; i++) {
        
        if (n % i == 0)
        {
            count++;
            target = i;
            if (count == k)
            {
                cout << target;
                return 0;
            }
            else
                ;
        }
        else
            continue;
    }

   

}
