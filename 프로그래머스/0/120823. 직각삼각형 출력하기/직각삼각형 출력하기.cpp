#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++) 
        {
             cout << "*";
        }
        cout << "\n";
    }
    
    return 0;
}