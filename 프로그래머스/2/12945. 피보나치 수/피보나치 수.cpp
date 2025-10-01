#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int fibonacci[100000];
    
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    
    for (int i = 2; i <= n; i++) {
        fibonacci[i] = (fibonacci[i - 1] + fibonacci[i - 2]) % 1234567;
    }
    
    return answer = fibonacci[n];
}